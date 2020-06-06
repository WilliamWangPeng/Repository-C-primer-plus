#include <iostream>
#include <string>
#include <cmath>
#include <bitset>

using namespace std;

int main()
{

//求平方根,优化算法迭代次数
	int const max_number(100);
	int const max_test((int)sqrt((double)max_number));  //求平方根,sqrt需要double类型,所以需要转型;


//由于从0开始,所以补充最后一位
	bitset<max_number + 1> numbers;  //101个0,由于计算机整型从0开始计数,加一是为了弥补最后一位100
	numbers.set();    //101个1
	numbers[1] = 0;




//算法主要部分,寻找质数
	for (int i(1);i!=max_test;++i)   //任何非质数至少有一个因数不会大于它的平方根
	{
		if (numbers[i])  
		{
			for (int j(i*i);j<max_number+1;j+=i)   //i本身不能消除,所以乘2;  
			{									//优化后为j从i*i开始,比其小的已经筛过,所以不用了;j(i*i)初始化比j=i*i快
				numbers[j] = 0;
			}
		} 
		
	}

	cout << "the number of primes less than" << max_number + 1 << "is" << endl << numbers.count() << endl;   
	//留下多少个一就有多少个质数








//输出找到的所有质数
		for (int i(1);i!=max_number+1;++i)
		{
			if (numbers[i])
			{
				cout << i << "," << endl;
			}
		}

	return 0;
}
