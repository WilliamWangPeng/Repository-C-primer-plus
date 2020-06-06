#include <iostream>
#include <string>

using namespace std;


//本节知识点:
					//条件操作符
					//sizeof操作符;
					//逗号操作符



int main()
{
	int val1, val2;

	cout << "enter two integers:" << endl;
	cin >> val1 >>val2;

	if(val1<val2)
	{
		cout << val1 <<"小"<< endl;
	}
	else if(val1>val2)
	{
		cout << val2 << "小" << endl;
	}
	else
	{
		cout << "same" << endl;
	}
	



//条件操作符也称三元操作符
	cout << "the smaller one is" << ((val1 < val2) ? val1 : val2) << endl;     //注意要在最外面加括号
	

	int i, j, k, max;
	cout << "enter three integers:" << endl;
	cin >> i >> j >> k;

	/*max = i;
	if (j>max){	max = j;}
	if (k>max){	max = k;}*/

	max = i > j ? (i > k ? i : k) : (j > k ? j : k);   //避免将条件操作符进行嵌套,不写括号不会报错,但可读性太低

	return 0;
}
