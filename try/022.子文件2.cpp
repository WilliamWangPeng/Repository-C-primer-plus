#include <iostream>
#include <string>
#include <vector>

using namespace std;


//��һ���ı���vector����,��ӡÿ������

int main()
{
	string str;
	vector<string> svec;

	cout << "enter text(ctrl+z to end):" << endl;
	while (cin>>str)
	{
		svec.push_back(str);
	}
	if (svec.size()==0)
	{
		cout << "no string!" << endl;
		return -1;

	}


	cout << "transformed elements from the vector:"
		<< endl;


//�˴��õ��˵�������	

	for (vector<string>::size_type ix=0;ix!=svec.size();++ix)  
	{
		for (string::size_type index=0;index !=svec[ix].size();++index)
		{
			if (islower(svec[ix][index]))
			{
				svec[ix][index] = toupper(svec[ix][index]);
			}
		}
		cout << svec[ix] << " ";
		if ((ix+1)%8==0)
		{
			cout << endl;    //�˴�����,ÿ�˸�����һ��
		}
	}              
	return 0;

									//����:���ɿ�ִ���ļ���,��cmd�����ļ���Ŀ¼,ִ�г���ͬʱ��������Ӧ�ı�,�����������ı�
}
