#include <iostream>
#include <string>

//��Ԫ����, ��Ԫ��

using namespace std;

class Screen;    //��ǰ����,��������ҵ��ඨ��

class Dog
{
public:
	int foo(Screen& screen);  //��ʱ������Ⱥ�ᵼ���Ҳ�����Ƕ�׵ĺ������ඨ��,�����������ķ�ʽ�����
protected:
private:
};

class Screen
{
public:
	friend class Window_Mgr;  //��Ԫ������
	friend int calcArea(Screen&);  //��Ԫ��������
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

int calcArea(Screen& screen)  //��Ԫ����
{
	return screen.height * screen.width;
}

class Window_Mgr      //��Ԫ��,ע�ⶨ����Ⱥ�,�����Ҳ����Ŀ���
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