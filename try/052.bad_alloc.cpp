#include <iostream>
#include <string>
#include <new>

using namespace std;

//本节知识点:
	//标准异常:
					//exception
					//runtime_error
					//rang_error
					//overflow_error
					//underflow_error
					//logic_error
					//domain_error
					//invalid_argument
					//length_error
					//out_of_range
					//bad_alloc   (需要包含new头文件)

class Dog
{

public:
	Dog()
	{
		parr = new int[1000000];    //开辟一块近4MB的内存,用于动态数组
	}

private:
	int* parr;
};



int main()
{
	
	Dog* pDog;
	try 
	{
		for (int i=1;i<10000;++i)   //40GB
		{
			pDog = new Dog();
			cout<<i << "it is successful" << endl;
		}

	}
	catch (bad_alloc err)
	{
		cout << "new Dog 失败" << err.what() << endl;   //抛出异常
	}
	

	return 0;
}
