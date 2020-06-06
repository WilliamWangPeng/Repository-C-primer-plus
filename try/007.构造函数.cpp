#include <iostream>
#include <string>

using namespace std;

class Person
{

public:
	Person(const string& nm, int a) :name(nm), age(a)//���ǹ��캯��
	{

	}
	string get()
	{
		return name;
	}
private:
	string name;
	int age;  //���ڲ���Ա���������ڲ���ʼ��,ֻ�����ڹ��캯�����ʼ��
};

class Cat
{
public:
	Cat() :age(0)//C++�����Լ��ӹ��캯��,��������,�����һ���в����Ĺ��캯��,�ڶ����޲�������ʱ,�ͻᱨ��
	{

	}
	string getName()
	{
		return this->name;
	}
	int getAge()
	{
		return this->age;
	}
private:
	string name;
	int age;
};

class Dog
{
public:
	Dog() :legs(4)//��ʼ��˳��private����˳���ʼ��,��˴���д˳���޹�
	{

	}
private:
	string name;
	const int legs;//const������ʼ���ڴ������������;
};

class Sales_item
{
public:

	explicit Sales_item(const string& book = "") :isbn(book)  //����book="",���԰ѹ��캯������,������������������
															//�˴�������δ��ʼ�����г�Ա
															//���캯��������const,���г�Ա���ᱻ�Զ���ʼ��
	{

	}//��ʼ������ڴ�������

	explicit Sales_item(istream& is)//explicit�����������캯���ĸ�����,ֻ���Ǻ�һ���βεĹ��캯�����ڸ�����,�ᱨ��;
									//(����������ڴ���һ���ַ���,���캯�����Զ�����һ���Ը��ַ��������Ķ���,����Ϊ��ʽʹ��,��̫��)
	{
		is >> *this;
	}

	bool same_isbn(const Sales_item& rhs)const
	{
		return isbn == rhs.isbn;
	}

	friend istream& operator>>(istream&, Sales_item&);  //����������
private:
	string isbn;//���û�й��캯���Զ����ʼ��,�ͻᱨ��
	unsigned units_sold;
	double revenue;//unsigned,double����ΪC++��������,���Բ����Զ���ʼ��,�����ڴ������ڳ�ʼ��
};

inline istream& operator>>(istream& in, Sales_item& s)  //��������,�˽��Խ�
{
	double price;
	in >> s.isbn >> s.units_sold >> price;
	if (in)
	{
		s.revenue = s.units_sold * price;
	}
	else
	{
		s = Sales_item();
	}
	return in;
}

class Data
{
public:
	int ival;
	char* ptr;
};

class Eata
{
public:
	Eata(int i, char* p) :ival(i), ptr(p)
	{

	}
private:
	int ival;
	char* ptr;
};


int main()
{
	char hi;
	Data v = { 9, &hi };  //C���Ա�������,��Data�ж��������public,�Ҳ����й��캯��;
	Eata w(8, &hi);


	Person a("�ŷ�", 22);

	Sales_item item1;  //���õڶ������캯��
	Sales_item item2("0-293-232");  //���õ�һ�����캯��
	Sales_item* p = new Sales_item();
	delete p;
	cout << a.get() << endl;
	return 0;
}