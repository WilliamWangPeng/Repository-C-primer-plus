#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	Person(const string& nm, const string& addr)
	{
		this->name = nm;  //this指向private内的name;
		this->address = addr;
	}
	string getName()const
	{
		return this->name;  //隐含的this, 所以不用定义
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
	const Screen& display(ostream& os) const  //由于const,其内部所有成员均不可修改
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
	mutable index access_ctr;   //计数器,mutable意为可修改,优先级高于const;

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
	return *this;  //*号是取消引用
}
Screen& Screen::set(char b)
{
	contents[cursor] = b;
	return *this;
}
int main()
{
	Person p("张飞", "花园街");
	Person p2("刘备", "花园街");

	cout << p.getName() << endl;
	cout << p2.getAddress() << endl;

	Screen myScreen(5, 3);
	cout << myScreen.get() << endl;
	myScreen.set(3, 2, 'b');
	cout << myScreen.get(3, 2) << endl;

	//这两行是重点
	myScreen.move(2, 3);
	myScreen.set('d');
	//更简单的写法
	myScreen.move(2, 3).set('c').display(cout).set('k').display(cout);//这个写法太漂亮了,函数需设置为引用类型
	cout << endl;
	myScreen.move(4, 0).set('h').move(4, 2).set('i').display(cout);  //display(cout)直接输出
	cout << endl;   //此处其换行作用
	cout << myScreen.get() << endl;
	cout << myScreen.check() << endl;  //查看display调用次数


	return 0;
}