#include <iostream>
#include <string>

//using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string name("����");

	cout << name << endl;




//string�����ֳ�ʼ������;

	string s1;
	string s2("hello");
	string s3(s2);
	string s4(10, 'a');

	string s5 = "hello"; //�Ƚ���,�ȶ���,֮���ָ�ֵ





//���ֶ�ȡ����cin,getline
	string c1;
	cout << "please input your name:" << endl;
	cin >> s1;  //������һ���ո�,ֹͣ��ȡ,��ͷ�հ��ַ��ӵ�,ֱ���ڶ��ζ����հ��ַ�,�����ĵڶ��οհ��ַ�
	cin >> c1;
	cout << s1 << endl;
	cout << c1 << endl;
	

	getline(cin, name);  //��ȡ����һ��,�������붼����,һֱ�������з�,Ȼ���ӵ����з�
	cout << name << endl;

	
	return 0;
}
