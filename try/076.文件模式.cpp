#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//����֪ʶ��:		
					//�ļ�ģʽѡ��
					// in��out��app��ate��trunc(�ض�,��ȫ��ɾ��)��binary;
					// �ļ�ģʽ���;
	/*				out
					out | app
					out | trunc
					in
					in | out
					in | out | ate
					in | out | trunc								*/
					

int main()
{
	string s;

	ifstream ifs("file1.txt", ifstream::in);   //���ļ����������������
	ifs >> s;
	ifs.close();	
	cout << s << endl;

	ofstream ofs("file3.txt");   //Ĭ��������� "out",�����ԭ�ļ�����,��������ļ�
	ofs << "hello file3" << endl;
	ofs << "hello file3" << endl;
	ofs.close();

	ofstream ofs4("file4.txt");     //����д��һ��,���ԭ�ļ�����,��������ļ�
	ofstream ofs4("file4.txt", ofstream::out);
	ofstream ofs4("file4.txt", ofstream::out | ofstream::trunc);
	ofs4 << "hello file4" << endl;
	ofs4.close();

	ofstream ofs5("file5.txt",ofstream::out | ofstream::app);     //�����ԭ����,������ļ�

	fstream fs("file.txt");    //��������д����ͬ
	fstream fs("file4.txt", fstream::in | fstream::out);   //�������ԭ����
	fs << s;		//�ļ���λָ��ָ���ͷ,���Ի��滻��һ������
	fs.close();    
	cout << s;

	ifstream ifs1("file0.txt", ifstream::in);     // in ģʽ,����ļ�������,���ᴴ��
	ifstream ifs2("file0.txt", ifstream::out);		// out ģʽ,����ļ�������,�ᴴ��һ��
	
	return 0;
}
