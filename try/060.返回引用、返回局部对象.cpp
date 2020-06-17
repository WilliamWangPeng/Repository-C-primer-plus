#include <iostream>
#include <string>

using namespace std;

int add_one(int &x)
{
	++x;
	return x;  //返回非引用类型,返回的是x的拷贝
}

int& add_one_2(int& x)
{
	++x;
	return x;     //返回引用类型,返回的不是拷贝
}


     //字符串合并
string make_plural(size_t ctr, const string& word, const string& ending)
{
	return(ctr == 1) ? word : word + ending;
}
	//返回更短的字符串
const string& shorter_string(const string& s1, const string& s2)
{
	return s1.size() < s2.size()?s1:s2;
}

//4.千万不要返回局部对象的引用
const string& manip(const string& s)
{
	string ret = s;
	return ret;    //返回的是ret,但是ret是一个局部对象,编译可通过,但会出现大问题
}

//6.千万不要返回指向局部对象的指针
int* manip2()
{
	int a = 100;
	int* p=&a;
	return p;

}


int main()
{
	int a = 1;
	int b = 0;
	b = add_one(a);
	++b;

	int& c = add_one_2(a);
	++c;
	
	cout << "a= " <<a<< ", b= " << b << endl;
	add_one(a);
	cout << a << endl;
	cout << c << endl;

	int cnt = 6;
	string dogs = make_plural(cnt, "dog", "s");
	cout << cnt << dogs << endl;





	return 0;
}
