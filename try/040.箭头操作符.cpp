#include <iostream>
#include <string>

using namespace std;


//����֪ʶ��:
					//��ͷ������=������+�������
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
	(*p).foo();   // .�����ȼ���* �����ȼ���
	p->foo();   //�������һģһ��


	return 0;
}
