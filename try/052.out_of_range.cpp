#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;


class ѧ��
{
public:
	ѧ��(int ����)
	{
		if (���� < 0 || ����>150)
		{
			throw out_of_range("���䲻��С��0�����100"); 
		}
		this->m_���� = ����;
	}
private:
	int m_����;
};

int main()
{
	try
	{
		ѧ�� �ŷ�(209);
		cout << "ѧ��û��" << endl;
	}
	catch (out_of_range err)
	{
		cout << "ѧ������ " << err.what() << endl;
	}

	return 0;
}
