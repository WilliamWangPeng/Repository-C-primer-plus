#include <iostream>
#include <string>

using namespace std;


//本节知识点:
					//箭头操作符=解引用+点操作符
					//(*p).foo();
					//p->foo();



class Dog
{
public:
	void foo()
	{
		cout << "hello Dog foo" << endl;
	}
};

int main()
{
	Dog d;
	d.foo();

	Dog* p;
	p = new Dog();
	(*p).foo();   // .的优先级比* 的优先级高
	p->foo();   //和上面的一模一样


	return 0;
}
