#include <iostream>


using namespace std;

int main()
{
    Sales_item total, trans; //�˴�Sales_item ͷ�ļ�δ����,���Ա���

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