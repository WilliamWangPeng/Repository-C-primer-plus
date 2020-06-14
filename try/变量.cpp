#include <iostream>
using namespace std;
 
int main()
{


//用变量实现乘方运算
    int a = 2;
    int b = 20; 
    int result = 1;
    for (int i = 0; i != b; i++)
        result = result * a;

    cout << "2的10次方:";
    cout << result;
    cout << endl;

    return 0;
}