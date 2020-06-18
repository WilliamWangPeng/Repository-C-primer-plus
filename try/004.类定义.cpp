

#include <iostream>
#include <string>
using namespace std;

class Screen;
//struct Glue;//�˴����岻�������ᱨ��;
			//��������C��������������д������C++�У��÷���classһ��,��Ĭ�϶������Ͳ�ͬ
			//classĬ��Ϊprivate,structĬ��Ϊpublic;

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
