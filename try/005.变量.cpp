#include <iostream>
using namespace std;
 
int main()
{


//�ñ���ʵ�ֳ˷�����
    int a = 2;
    int b = 20; 
    int result = 1;
    for (int i = 0; i != b; i++)
        result = result * a;

    cout << "2��10�η�:";
    cout << result;
    cout << endl;

    return 0;
}