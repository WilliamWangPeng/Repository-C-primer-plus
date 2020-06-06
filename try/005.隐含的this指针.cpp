#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	Person(const string& nm, const string& addr)
	{
		this->name = nm;  //thisָ��private�ڵ�name;
		this->address = addr;
	}
	string getName()const
	{
		return this->name;  //������this, ���Բ��ö���
	}
	string getAddress()const
	{
		return this->address;
	}


private:
	string name;
	string address;

};

class Screen
{
public:
	typedef string::size_type index;
	Screen(index ht = 0, index wd = 0) :contents(ht* wd, 'S'), cursor(0), height(ht), width(0), access_ctr(0)
	{

	}
	char get()const
	{
		return contents[cursor];
	}
	char get(index r, index c)const
	{
		index row = r * width;
		return contents[row + c];
	}
	Screen& move(index r, index c);
	Screen& set(index r, index c, char b);
	Screen& set(char b);
	const Screen& display(ostream& os) const  //����const,���ڲ����г�Ա�������޸�
	{
		access_ctr++;
		do_display(os);
		return *this;
	}
	Screen& display(ostream& os)
	{
		access_ctr++;
		do_display(os);
		return *this;
	}
	int check()
	{
		return access_ctr;
	}
private:
	string contents;
	index cursor;
	index height, width;
	mutable index access_ctr;   //������,mutable��Ϊ���޸�,���ȼ�����const;

	void do_display(ostream& os)const
	{
		os << contents;
	}
};

Screen& Screen::move(index r, index c)
{
	index row = r * width;
	cursor = row + c;
	return *this;
}
Screen& Screen::set(index r, index c, char b)
{
	index row = r * width;
	contents[row + c] = b;
	return *this;  //*����ȡ������
}
Screen& Screen::set(char b)
{
	contents[cursor] = b;
	return *this;
}
int main()
{
	Person p("�ŷ�", "��԰��");
	Person p2("����", "��԰��");

	cout << p.getName() << endl;
	cout << p2.getAddress() << endl;

	Screen myScreen(5, 3);
	cout << myScreen.get() << endl;
	myScreen.set(3, 2, 'b');
	cout << myScreen.get(3, 2) << endl;

	//���������ص�
	myScreen.move(2, 3);
	myScreen.set('d');
	//���򵥵�д��
	myScreen.move(2, 3).set('c').display(cout).set('k').display(cout);//���д��̫Ư����,����������Ϊ��������
	cout << endl;
	myScreen.move(4, 0).set('h').move(4, 2).set('i').display(cout);  //display(cout)ֱ�����
	cout << endl;   //�˴��任������
	cout << myScreen.get() << endl;
	cout << myScreen.check() << endl;  //�鿴display���ô���


	return 0;
}