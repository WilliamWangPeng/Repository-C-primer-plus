#include <iostream>

using namespace std;


//本节知识点:
					//int main(int argc, char **argv)   命令行选项
						
		    //个数   字符串数组
int main(int argc, char **argv)     //调试出现错误,原因未知
{
	cout << argv[0] << endl;   //argv[0]不是命令行选项
	cout << argv[1] << endl;
	cout << argv[2] << endl;

	for (int i = 0; i < argc; ++i)
	{
		cout << "循环" << argv[i] << endl;
	}

	int start, end, step;
	start = atoi(argv[1]);   //atoi会将argv[i]转换为数字;
	end = atoi(argv[2]);
	step = atoi(argv[3]);

	for (int k = start; k <= end; k += step)
	{
		cout << k << endl;
	}
	return 0;
}
