#include <iostream>
#include <string>

using namespace std;

class Person
{

public:
	Person(const string& nm, int a) :name(nm), age(a)//这是构造函数
	{

	}
	string get()
	{
		return name;
	}
private:
	string name;
	int age;  //类内部成员不能在类内部初始化,只可以在构造函数里初始化
};

class Cat
{
public:
	Cat() :age(0)//C++可以自己加构造函数,但不靠谱,如果有一个有参数的构造函数,在定义无参数的类时,就会报错
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
	Dog() :legs(4)//初始化顺序按private定义顺序初始化,与此处书写顺序无关
	{

	}
private:
	string name;
	const int legs;//const变量初始化在大括号外必须有;
};

class Sales_item
{
public:

	explicit Sales_item(const string& book = "") :isbn(book)  //加上book="",可以把构造函数多用,传不传参数均可以用
															//此处警告是未初始化所有成员
															//构造函数不可以const,所有成员都会被自动初始化
	{

	}//初始化最好在大括号外

	explicit Sales_item(istream& is)//explicit用来消除构造函数的副作用,只有是含一个形参的构造函数存在副作用,会报错;
									//(如果主函数内传入一个字符串,构造函数会自动创建一个以该字符串命名的对象,被称为隐式使用,不太好)
	{
		is >> *this;
	}

	bool same_isbn(const Sales_item& rhs)const
	{
		return isbn == rhs.isbn;
	}

	friend istream& operator>>(istream&, Sales_item&);  //操作符重载
private:
	string isbn;//如果没有构造函数对对象初始化,就会报错
	unsigned units_sold;
	double revenue;//unsigned,double类型为C++内置类型,所以不会自动初始化,可以在大括号内初始化
};

inline istream& operator>>(istream& in, Sales_item& s)  //内联函数,此节略讲
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
	Data v = { 9, &hi };  //C语言保留操作,但Data中对象必须是public,且不能有构造函数;
	Eata w(8, &hi);


	Person a("张飞", 22);

	Sales_item item1;  //调用第二个构造函数
	Sales_item item2("0-293-232");  //调用第一个构造函数
	Sales_item* p = new Sales_item();
	delete p;
	cout << a.get() << endl;
	return 0;
}