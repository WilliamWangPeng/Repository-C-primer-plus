#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

//����֪ʶ��:
					//�̳�:����->������
					// 3��ͷ�ļ�
					// 9����׼������
					// IO ���󲻿ɸ��ƻ�ֵ

		//								ostream                     istream
//								+		+		+				  +		+      +
//				+					+				+		+				+					+
		//	ofstream		ostringstream			iostream			istringstream         ifstream
//														+  +
//													+			+
		//									stringstream		fstream

void print(ofstream of)
{
	cout << "test" << endl;
}

void foo(ostream& os)     //���ǿ��Դ������ĺ��������Դ�����������
{
	cout << "test ostream" << endl;
}

int main()
{
	ofstream ofs;
	foo(ofs);

	cout << "hello C++" << endl;

	ofstream out1, out2;

	//out1 = out2;      //�����󲻿ɸ�ֵ
	//print(out1);     //�����󲻿ɿ���

	/*vector<ofstream> vec;   
	vec.push_back(out1);		 ͬ�������,ͬ���Ḵ��
	vec.push_back(out2);*/

	
	return 0;
}
