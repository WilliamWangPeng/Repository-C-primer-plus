#include <iostream>
#include <string>
using namespace std;

int main()
{




//size()����ʹ��

	string st("hello");
	cout << "�ַ�����С(�ַ��ĸ���)" << st.size() << endl;

	

	string::size_type size = st.size();  //size_type����C++��ר��Ϊsize()���������
	




//�ַ�������

	string a1("hello,");
	string a2("world");

	string a3 = a1 + a2;
	cout << a3 << endl;

	a1 += a2;  //�����ַ���

	//string a4 = "hello" + ",";  //��C++�ڷǷ�,�������Ի������
	string s5 = a1 + "," ;   //�ַ�������ֵ֮�䲻������,C++������ϸ�


	return 0;
}
