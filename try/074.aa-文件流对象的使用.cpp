#include <iostream>
#include <fstream>   //�ļ���

using namespace std;


//����֪ʶ��:
					//���ļ�������󶨵��ļ���
					//����ļ��Ƿ�򿪳ɹ�
					//���ļ��������ļ����°�
					//����ļ�����״̬


int main()
{
	ofstream outfile("test.txt");    //������һ�� test.txt �ļ�
	outfile << "hello file";
	outfile.close();

	string file("one.txt");
	ifstream infile(file.c_str());    //�ļ�������ʱ��Ҫ���� C ����ַ���
	// ifstream infile("one.txt");   // ifstream ���Ͷ��� infile �����ļ� one.txt
	ifstream infile1;   
	infile1.open(file.c_str());    //����ʱδ��,���� open ����

	if (infile1)    //���ļ��ɹ�,���ļ������󶨳ɹ�
	{
		cerr << "ok" << endl;
	}
	if (!infile1)
	{
		cerr << "error:unable to open input file " << file << endl;
		return -1;   //��ǰ����main����
	}
	infile1.close();

	string s;
	while (infile >> s)   //����infile״̬��eof
	{
		cout << "������ " << s << endl;
	}

	infile.close();
	infile.clear();    //ע��ÿ�����궼Ҫ�������״̬,��Ȼ֮���޷�ʹ��




	infile.open("two.txt");
	if (infile)    //���ļ��ɹ�,���ļ������󶨳ɹ�
	{
		cerr << "ok" << endl;
	}
	if (!infile)
	{
		cerr << "error:unable to open input file " << file << endl;
		return -1;   //��ǰ����main����
	}
	infile.close();
	
	while (infile>>s)
	{
		cout << s << endl;
	}
	infile.close();
	infile.clear();
	
	return 0;
}
