#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

//本节知识点:
					//继承:基类->派生类
					// 3个头文件
					// 9个标准库类型
					// IO 对象不可复制或赋值

		//								ostream                     istream
//								+		+		+				  +		+      +
//				+					+				+		+				+					+
		//	ofstream		ostringstream			iostream			istringstream         ifstream
//														+  +
//													+			+
		//									stringstream		fstream

void print(ofstream of)
{
	cout << "test" << endl;
}

void foo(ostream& os)     //凡是可以传入基类的函数都可以传入其派生类
{
	cout << "test ostream" << endl;
}

int main()
{
	ofstream ofs;
	foo(ofs);

	cout << "hello C++" << endl;

	ofstream out1, out2;

	//out1 = out2;      //流对象不可赋值
	//print(out1);     //流对象不可拷贝

	/*vector<ofstream> vec;   
	vec.push_back(out1);		 同样会出错,同样会复制
	vec.push_back(out2);*/

	
	return 0;
}
