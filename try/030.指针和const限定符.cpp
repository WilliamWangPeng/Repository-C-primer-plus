#include <iostream>
#include <string>

using namespace std;


//本节知识点:
					//指向const对象的指针
					//const指针;
					//指向const对象的const指针
					//指针和typedef
					//理解复杂繁绕的const类型声明



void doA(const int*p)  //用指向常对象的指针来预防函数内部对对象进行修改
{

}


//指针和typedef
typedef string* pstring;

int main()
{

//理解复杂繁绕的const类型声明
    //指向const对象的指针
	double a = 1.2;
	double* p = &a;

	//一般用指向常对象的指针传递参数
	const double pi = 3.14;
	//double* pppp = &pi;  //此处错误,不能用普通指针指向一个常对象
	const double* cptr = &pi;  //要想用指针指向一个常对象,就必须用一个指向常对象的指针

	cptr = &a;   /*可以用指向常对象的指针指向普通对象
					cptr = 1.5;   但不可以对其修改*/




//const指针;
	int errNum = 0;
	int* const curErr=&errNum;   //常指针,一旦指向便无法指向其他对象,所以定义时必须进行初始化




//指向const对象的const指针
	const double* const pi_ptr = &pi;  //无法再指向其他对象,而且无法对指向的对象进行修改




//定义const的前后区分细节;

					//定义const对象时,const可以放前,也可以放后;
	const string s1;  
	string const s2;

	string cs = "a";
	//const pstring cstr;  //此处的cstr和下面的cstr3一样,和cstr1也一样
	//pstring const cstr1;

	const string* cstr2;
	//string* const cstr3=&cs;
	


	return 0;
}
