#include <iostream>
#include <string>
using namespace std;

class Sales_item
{

};

int main()
{


//定义各种不同的对象
	int units_sold;
	double sales_price, avg_price;

	string title;
	Sales_item curr_book;
	cout << "ok" << endl;

	int ival(1024);  //变量初始化方式1
	int iva = 2938;  //变量初始化方式2

	cout << ival << endl;
	cout << iva << endl;
									//string 的不同初始化方式
	string titleA = "C++ primer, 4th ed";
	string titleB("C++ primer,4th ed.");
	string all_nines(10, '9');

	return 0;
}