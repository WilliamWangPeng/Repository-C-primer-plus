#include <iostream>


using namespace std;

int main()
{
    Sales_item total, trans; //此处Sales_item 头文件未完善,所以报错

   if (cin>>total)
   {
       while (cin>>trans)
       {
           if (total.same_isbn(trans))
           {
               total += trans;
           } 
           else
           {
               cout << total << endl;
               total = trans;
           }
       }
   } 
   else
   {
       cout << "no data" << endl;
   }

    return 0;
 }