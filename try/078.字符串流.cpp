#include <iostream>
#include <fstream>   //文件流头文件
#include <sstream>   //字符串流头文件

using namespace std;

//本节知识点:
					// 字符串流:内存中的输入输出
						// istringstream、ostringstream、stringstream  ;
					// 字符串流stringstream特定的操作
						// stringstream strm;
						// stringstream strm(s);
						// strm.str()
						// strm.str(s)
					// stringstream提供的转换和格式化;

int main()
{

	cout << "hello" << endl;

	ofstream ofs("ofs.txt");     //会创建一个文件
	ofs << "hello" << endl;
	ofs.close();

	ostringstream oss;       //输出字符串流
	oss << "hello" << endl;
	cout << oss.str() << endl;    //str()函数,返回流对象 oss 中所有的字符串

	ostringstream format_message;     //输入到流里之后,会全部变为字符串格式,字面保存
	format_message << "姓名 " << "张飞 " << "\n"
		<< "年龄 " << 22 << "\n"
		<< "体重 " << 88.5 << "\n";

	cout << "显示张飞: \n" << format_message.str() << endl;

	string dump;
	string 姓名;
	int 年龄;
	double 体重;


	// stringstream提供的转换和格式化;
	istringstream input_istring(format_message.str());     //输入字符串流
	input_istring >> dump;        //扔掉"姓名"
	input_istring >> 姓名;
	input_istring >> dump;		  //扔掉"体重"
	input_istring >> 年龄;
	input_istring >> dump;
	input_istring >> 体重;

	cout << "读到的结果 " << endl;
	cout << 姓名 << endl;
	cout << 年龄 << endl;
	cout << 体重 << endl;
	return 0;
}
