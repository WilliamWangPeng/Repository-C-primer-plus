// C++primer�м�.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Screen;
//struct Glue;//�˴����岻�������ᱨ��;
			//��������C��������������д������C++�У��÷���classһ��,��Ĭ�϶������Ͳ�ͬ,classĬ��Ϊprivate,structĬ��Ϊpublic

class LinkScreen     //�����ඨ���ڲ�����ָ���Լ���ָ�롢����
{
	Screen* window;
	LinkScreen* next;
	LinkScreen* prev;
	LinkScreen* o;
};

class Record   //���������ڲ�Ϊ�ඨ��
{

public:
	typedef size_t size;
	size get_count() const
	{
		return byte_count;
	}
	string get_name() const
	{
		return name;
	}
	Record() :byte_count(0)
	{

	}
	Record(size s) :byte_count(s)
	{

	}
	Record(string s) :name(s), byte_count(0)
	{

	}


private:  //˽�г�Ա,����ⲿ��ȫ�޷�ֱ�ӷ���

	size byte_count;
	string name;     //��¼����
} dog;   //�˴�Ҳ�ɶ������


struct Glue
	//���������ڲ�Ϊ�ඨ��
{

public:
	typedef size_t size;
	size get_count() const
	{
		return byte_count;
	}
	string get_name() const
	{
		return name;
	}
	Glue() :byte_count(0)
	{

	}
	Glue(size s) :byte_count(s)
	{

	}
	Glue(string s) :name(s), byte_count(0)
	{

	}


private:

	size byte_count;
	string name;     //��¼����
};


int main()
{
	Glue c;
	Record q;
	Record* p = new Record;      //�ڶ�ջ�϶�̬�ش�����Ķ���
	delete p;   //����֮����Ҫɾ��
	Record r;
	cout << " " << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
