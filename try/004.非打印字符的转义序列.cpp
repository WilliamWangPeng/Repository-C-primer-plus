#include <iostream>

using namespace std;

int main()
{

//�Ǵ�ӡ�ַ���ת���ַ�ʹ��

	cout << "��˵:\"����ѧϰC++\"" << endl;  //����"\"��ת������
	cout << "�ҵ��ļ�����:c:\\bit\\test" << endl;   //�˴�"\"Ϊ"\"ת��
	cout << "hello\n";
	cout << "here\r\n";

	cout << "M\12 2" << endl;  //�˴�\12�൱��\n,\n��ASCLL��Ϊ012,ת��Ϊ�˽���,��Ϊ\12
	cout << "2\xaM" << endl;  //"\12"�в�����ʮ����;�˽���,ʮ�����ƿ���

	cout << "\062\012\115" << endl;  //�˽���ת��
	cout << "\x032\x00A\x04D" << endl;  //ʮ�����Ʊ�Ŵ�Сд����

	cout << '2';
	cout << '\n';
	cout << 'M';
	cout << endl;

	cout << '\062';
	cout << '\012';
	cout << '\115';
	cout << endl;

	cout << '\x032';
	cout << '\x00a';
	cout << '\x04d';
	cout << endl;

	return 0;
}