#include <iostream>
#include <fstream>   //�ļ���ͷ�ļ�
#include <sstream>   //�ַ�����ͷ�ļ�

using namespace std;

//����֪ʶ��:
					// �ַ�����:�ڴ��е��������
						// istringstream��ostringstream��stringstream  ;
					// �ַ�����stringstream�ض��Ĳ���
						// stringstream strm;
						// stringstream strm(s);
						// strm.str()
						// strm.str(s)
					// stringstream�ṩ��ת���͸�ʽ��;

int main()
{

	cout << "hello" << endl;

	ofstream ofs("ofs.txt");     //�ᴴ��һ���ļ�
	ofs << "hello" << endl;
	ofs.close();

	ostringstream oss;       //����ַ�����
	oss << "hello" << endl;
	cout << oss.str() << endl;    //str()����,���������� oss �����е��ַ���

	ostringstream format_message;     //���뵽����֮��,��ȫ����Ϊ�ַ�����ʽ,���汣��
	format_message << "���� " << "�ŷ� " << "\n"
		<< "���� " << 22 << "\n"
		<< "���� " << 88.5 << "\n";

	cout << "��ʾ�ŷ�: \n" << format_message.str() << endl;

	string dump;
	string ����;
	int ����;
	double ����;


	// stringstream�ṩ��ת���͸�ʽ��;
	istringstream input_istring(format_message.str());     //�����ַ�����
	input_istring >> dump;        //�ӵ�"����"
	input_istring >> ����;
	input_istring >> dump;		  //�ӵ�"����"
	input_istring >> ����;
	input_istring >> dump;
	input_istring >> ����;

	cout << "�����Ľ�� " << endl;
	cout << ���� << endl;
	cout << ���� << endl;
	cout << ���� << endl;
	return 0;
}
