#ifndef demo_h
#define demo_h

#include <string>
using namespace std;      //ͷ�ļ�using namespace std; Դ�ļ��Ͳ���д��


		//��������������ͷ�ļ�������������,����������ͨ����һ��,ͷ�ļ�����,Դ�ļ�����
			//��Ϊ���������ڱ���ʱ����������Ҫ֪������������,�������滻�����õ�
			//����ͨ��������ʱ������ֻ��Ҫ֪��������������,ִ��ʱ���л�����������λ��ִ��

inline int sum(int a, int b)    //��������,����ʱ���ڵ��õĵط�չ��,ֱ�ӱ��滻�� x[i]+y[i]
{
	return a + b;
}

inline const string& shortString(const string& s1, const string& s2)
{
	return s1.size() < s2.size() ? s1 : s2;
}

#endif
