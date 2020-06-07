#include <iostream>
#include <string>

using namespace std;


//本节知识点:
					//使用switch替代if
					//使用break避免贯穿
					//default标号;
					//switch 表达式与case标号
					//switch 内部的变量定义

int main()
{
	int i;
	cout << "请输入今天是星期几" << endl;
	cin >> i;

//使用break避免贯穿,如果不写break,会将符合条件的case及其之后的语句全部输出
	switch (i)
	{
	case 1:     //case必须不能用小数;
		cout << "星期一" << endl;
		break;
	case 2:
		cout << "星期二" << endl;
		break;
	case 3:
		cout << "星期三" << endl;
		break;
	case 4:
		cout << "星期四" << endl;
		break;
	case 5:   //如果非要在前面的case里定义变量,必须用上大括号,表示这是一个块语句,块之外便不能用此变量
	{
		int i;
		cout << "星期五" << endl;
		break;
	}
	case 6:
		cout << "星期六" << endl;
		break;
	case 7:
		cout << "星期日" << endl;
		break;
	//default标号,在输入超限时输出提示;
	default:
		
		cout << "错误输入" << endl;    //如果要定义变量,只可以在最后一个里面定义
		break;
	}
	
	return 0;
}
