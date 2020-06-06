
#include <iostream>  //头文件,引入函数处理对象
#include <string>
#include "Dog.h"  //自定义头文件书写格式
#include "Sales_item.h"

using namespace std;  //std名称空间;

/*
    这是注释,C++风格

*/

int main()
{

    //Dog d;  //定义应在头文件内
    int v;

    cin >> v;
    //cin >> d;  //类也可输入

    cout << v;
    //cout << d;     //Dog类定义未完善,所以报错;




    cout << "enter two number:" << endl;

    int v1, v2;
    cin >> v1;
    cin >> v2;

    cout << v1 << "," << v2 << endl;
    cout << "Hello World!"<<endl;  //endl可刷新缓冲区,使显示迅速;也可起到换行作用;

    return 0;      //返回0,告诉Windows,一切正常;return之后的代码无效;
    
    
}
