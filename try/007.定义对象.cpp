#include <iostream>
#include <string>
using namespace std;

class Sales_item
{

};

int main()
{


//������ֲ�ͬ�Ķ���
	int units_sold;
	double sales_price, avg_price;

	string title;
	Sales_item curr_book;
	cout << "ok" << endl;

	int ival(1024);  //������ʼ����ʽ1
	int iva = 2938;  //������ʼ����ʽ2

	cout << ival << endl;
	cout << iva << endl;
									//string �Ĳ�ͬ��ʼ����ʽ
	string titleA = "C++ primer, 4th ed";
	string titleB("C++ primer,4th ed.");
	string all_nines(10, '9');

	return 0;
}