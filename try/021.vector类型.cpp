#include <iostream>
#include <vector>
#include <string>			
				//vector��һ����̬����,��С����,������;

using std::vector;
using namespace std;

int main()
{


//vector��������;

	vector<int> ivec;	      //����int�������ݵ�һ��vector
	vector<double> devc;
	vector<string> svec;
	//vector<Dog> dogvec;     //����dog�������ݵ�һ��vector


	vector<int> a;        //a��һ���յ�����;
	vector<int> b(10, 3);		//b��һ������,������10��3;

	a.push_back(1);
	a.push_back(2);
	a.push_back(3);

	b.push_back(29);
	b.push_back(23);

	cout << a.size() << endl;
	cout << b.size() << endl;

	for (vector<int>::size_type i = 0; i != a.size(); ++i)   //�˴�vectorҲ��size_type,vector������;
		cout << a[i] << endl;

	return 0;
}
