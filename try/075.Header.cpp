#include "075.Header.h"

istream& get(istream& in)
{				//函数功能:循环输入整数,判断是否有误,并输出数据
	int ival;
	while (in >> ival, !in.eof())
	{
		if (in.bad())
			throw runtime_error("IO stream corrupted");
		if (in.fail())
		{
			cerr << "bad data, try again" << endl;
			in.clear();
			in.ignore(200, '\n');
			continue;
		}
		cout << "输入的数据:" << ival << endl;
	}
	in.clear();
	return in;
}