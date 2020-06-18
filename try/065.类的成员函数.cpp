#include <iostream>
#include <string>

using namespace std;

//本节知识点:
					//函数原型必须在类中定义:声明或定义
					//函数体
						// 1.在类中定义函数体
						// 2.在类外定义函数体
					// this指针;
					// const成员函数;

int sum(int x , int y)
{
	return x + y;
}


class Sales_item
{
public:
	double avg_price()const;     //函数声明

	bool same_isbn(const Sales_item& rhs) const   //const用来不让函数修改数据成员;
	{
		return this->isbn == rhs.isbn;   //this 代表当前对象
	}

public:
	string isbn;
	unsigned units_sold;
	double revenue;

};

		//在类外定义函数体
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
		cout << "这两个是同一种书" << endl;
	}
	else
	{
		cout << "这两本书不是同一种书" << endl;
	}

	return 0;
}
