#include <iostream>
#include <string>

//友元函数, 友元类

using namespace std;

class Screen;    //提前声明,帮助软件找到类定义

class Dog
{
public:
	int foo(Screen& screen);  //有时定义的先后会导致找不到相嵌套的函数或类定义,可以用声明的方式来解决
protected:
private:
};

class Screen
{
public:
	friend class Window_Mgr;  //友元类声明
	friend int calcArea(Screen&);  //友元函数声明
	friend int  Dog::foo(Screen&);

	typedef string::size_type index;

	Screen(int ht = 0, int wd = 0) :contents(ht* wd, ' '), cursor(0), width(wd), height(ht)
	{

	}
	double area()const
	{
		return height * width;

	}

private:
	string contents;
	index cursor;
	int height, width;
};

int calcArea(Screen& screen)  //友元函数
{
	return screen.height * screen.width;
}

class Window_Mgr      //友元类,注意定义的先后,存在找不到的可能
{
public:
	void relocate(int r, int c, Screen& s)
	{
		s.height += r;
		s.width += c;
	}
};

int Dog::foo(Screen& screen)
{
	return screen.height * screen.width;
}

int main()
{
	Screen a(60, 100);
	cout << "ok" << endl;
	cout << a.area() << endl;
	cout << calcArea(a) << endl;

	Window_Mgr wm;
	wm.relocate(20, 100, a);
	cout << calcArea(a) << endl;

	return 0;
}