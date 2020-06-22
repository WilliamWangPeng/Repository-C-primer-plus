#include <iostream>
#include <fstream>   //文件流

using namespace std;


//本节知识点:
					//将文件流对象绑定到文件上
					//检查文件是否打开成功
					//将文件流与新文件重新绑定
					//清除文件流的状态


int main()
{
	ofstream outfile("test.txt");    //创建了一个 test.txt 文件
	outfile << "hello file";
	outfile.close();

	string file("one.txt");
	ifstream infile(file.c_str());    //文件流传入时需要传入 C 风格字符串
	// ifstream infile("one.txt");   // ifstream 类型对象 infile 绑定了文件 one.txt
	ifstream infile1;   
	infile1.open(file.c_str());    //定义时未绑定,就用 open 来打开

	if (infile1)    //打开文件成功,即文件与流绑定成功
	{
		cerr << "ok" << endl;
	}
	if (!infile1)
	{
		cerr << "error:unable to open input file " << file << endl;
		return -1;   //提前结束main函数
	}
	infile1.close();

	string s;
	while (infile >> s)   //读到infile状态是eof
	{
		cout << "读到了 " << s << endl;
	}

	infile.close();
	infile.clear();    //注意每次用完都要清除流的状态,不然之后无法使用




	infile.open("two.txt");
	if (infile)    //打开文件成功,即文件与流绑定成功
	{
		cerr << "ok" << endl;
	}
	if (!infile)
	{
		cerr << "error:unable to open input file " << file << endl;
		return -1;   //提前结束main函数
	}
	infile.close();
	
	while (infile>>s)
	{
		cout << s << endl;
	}
	infile.close();
	infile.clear();
	
	return 0;
}
