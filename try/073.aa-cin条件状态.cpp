#include <iostream>
#include <istream>


using namespace std;

//����֪ʶ��:
			/*		strm::iostate          
					strm::badbit
					strm::failbit
					strm::eofbit

					s.eof()
					s.fail()
					s.bad()
					s.good()
					s.clear()
					s.clear(flag)
					s.setstate(flag)
					s.rdstate()							*/

void check_cin_state(istream& is)
{
	if (is.bad())   //�ж�cin�Ƿ������صĴ���
	{
		cout << "cin bad()" << endl;
	}
	else
	{
		cout << "cin not bad()" << endl;
	}

	if (is.fail())
	{
		cout << "cin fail()" << endl;
	}
	else
	{
		cout << "cin not fail()" << endl;
	}

	if (is.eof())    //�Ƿ����
	{
		cout << "cin eof()" << endl;
	}
	else
	{
		cout << "cin not eof()" << endl;
	}

	if (is.good())
	{
		cout << "cin good()" << endl;
	}
	else
	{
		cout << "cin not good()" << endl;
	}
}

int main()
{
	cout << "���cin��״̬" << endl;
	//cin.setstate(istream::badbit);   //ǿ��ת��cin��״̬Ϊbad
	//cin.setstate(istream::failbit);
	cin.setstate(istream::badbit | istream::failbit);   //״̬ת��Ҳ��ͬʱд
	//cin.clear();    //�������״̬
	//cin.clear(istream::badbit);   //���һ��
	check_cin_state(cin);

	cout << "������һ������" << endl;

	int n;
	cin >> n;     //������벻������,��ʹcin����fail״̬
	cout << "�ټ��һ��" << endl;
	check_cin_state(cin);

	//ʹ������״̬
	istream::iostate old_state = cin.rdstate();
	cin.clear(old_state);   //�ǵ�Ҫclear,�������ʹ��
	
	return 0;
}
