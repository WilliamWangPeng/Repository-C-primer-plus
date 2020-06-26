#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//本节知识点:		
					//文件模式选项
					// in、out、app、ate、trunc(截断,即全部删除)、binary;
					// 文件模式组合;
	/*				out
					out | app
					out | trunc
					in
					in | out
					in | out | ate
					in | out | trunc								*/
					

int main()
{
	string s;

	ifstream ifs("file1.txt", ifstream::in);   //将文件的内容输进到变量
	ifs >> s;
	ifs.close();	
	cout << s << endl;

	ofstream ofs("file3.txt");   //默认是输出流 "out",会清空原文件内容,并输出到文件
	ofs << "hello file3" << endl;
	ofs << "hello file3" << endl;
	ofs.close();

	ofstream ofs4("file4.txt");     //三种写法一样,清空原文件内容,并输出到文件
	ofstream ofs4("file4.txt", ofstream::out);
	ofstream ofs4("file4.txt", ofstream::out | ofstream::trunc);
	ofs4 << "hello file4" << endl;
	ofs4.close();

	ofstream ofs5("file5.txt",ofstream::out | ofstream::app);     //不清楚原内容,输出到文件

	fstream fs("file.txt");    //以下两种写法相同
	fstream fs("file4.txt", fstream::in | fstream::out);   //不会清空原内容
	fs << s;		//文件定位指针指向最开头,所以会替换第一个对象
	fs.close();    
	cout << s;

	ifstream ifs1("file0.txt", ifstream::in);     // in 模式,如果文件不存在,不会创建
	ifstream ifs2("file0.txt", ifstream::out);		// out 模式,如果文件不存在,会创建一个
	
	return 0;
}
