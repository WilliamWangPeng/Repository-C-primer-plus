#include <iostream>
#include <string>
#include <new>

using namespace std;

//����֪ʶ��:
	//��׼�쳣:
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
					//bad_alloc   (��Ҫ����newͷ�ļ�)

class Dog
{

public:
	Dog()
	{
		parr = new int[1000000];    //����һ���4MB���ڴ�,���ڶ�̬����
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
		cout << "new Dog ʧ��" << err.what() << endl;   //�׳��쳣
	}
	

	return 0;
}
