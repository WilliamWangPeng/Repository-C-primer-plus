#include <iostream>
#include <string>

using namespace std;

int add_one(int &x)
{
	++x;
	return x;  //���ط���������,���ص���x�Ŀ���
}

int& add_one_2(int& x)
{
	++x;
	return x;     //������������,���صĲ��ǿ���
}


     //�ַ����ϲ�
string make_plural(size_t ctr, const string& word, const string& ending)
{
	return(ctr == 1) ? word : word + ending;
}
	//���ظ��̵��ַ���
const string& shorter_string(const string& s1, const string& s2)
{
	return s1.size() < s2.size()?s1:s2;
}

//4.ǧ��Ҫ���ؾֲ����������
const string& manip(const string& s)
{
	string ret = s;
	return ret;    //���ص���ret,����ret��һ���ֲ�����,�����ͨ��,������ִ�����
}

//6.ǧ��Ҫ����ָ��ֲ������ָ��
int* manip2()
{
	int a = 100;
	int* p=&a;
	return p;

}


int main()
{
	int a = 1;
	int b = 0;
	b = add_one(a);
	++b;

	int& c = add_one_2(a);
	++c;
	
	cout << "a= " <<a<< ", b= " << b << endl;
	add_one(a);
	cout << a << endl;
	cout << c << endl;

	int cnt = 6;
	string dogs = make_plural(cnt, "dog", "s");
	cout << cnt << dogs << endl;





	return 0;
}
