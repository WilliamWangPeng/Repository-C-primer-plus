#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;


class 学生
{
public:
	学生(int 年龄)
	{
		if (年龄 < 0 || 年龄>150)
		{
			throw out_of_range("年龄不能小于0或大于100"); 
		}
		this->m_年龄 = 年龄;
	}
private:
	int m_年龄;
};

int main()
{
	try
	{
		学生 张飞(209);
		cout << "学生没错" << endl;
	}
	catch (out_of_range err)
	{
		cout << "学生出错 " << err.what() << endl;
	}

	return 0;
}
