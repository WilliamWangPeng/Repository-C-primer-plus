#include <iostream>
#include <string>

using namespace std;

//����֪ʶ��:
					//����ԭ�ͱ��������ж���:��������
					//������
						// 1.�����ж��庯����
						// 2.�����ⶨ�庯����
					// thisָ��;
					// const��Ա����;

int sum(int x , int y)
{
	return x + y;
}


class Sales_item
{
public:
	double avg_price()const;     //��������

	bool same_isbn(const Sales_item& rhs) const   //const�������ú����޸����ݳ�Ա;
	{
		return this->isbn == rhs.isbn;   //this ����ǰ����
	}

public:
	string isbn;
	unsigned units_sold;
	double revenue;

};

		//�����ⶨ�庯����
double Sales_item::avg_price()const
{
	if (this->units_sold)
	{
		return (this->revenue / this->units_sold);
	}
	else
	{
		return 0;
	}
	
}


int main()
{
	Sales_item item1, item2;

	item1.isbn = "0-201-78345-X";
	item1.units_sold = 10;
	item1.revenue = 300;

	item2.isbn = "0-201-78345-X";
	item2.units_sold = 2;
	item2.revenue = 70;
	
	if (item1.same_isbn(item2))
	{
		cout << "��������ͬһ����" << endl;
	}
	else
	{
		cout << "�������鲻��ͬһ����" << endl;
	}

	return 0;
}
