#include "075.Header.h"

istream& get(istream& in)
{				//��������:ѭ����������,�ж��Ƿ�����,���������
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
		cout << "���������:" << ival << endl;
	}
	in.clear();
	return in;
}