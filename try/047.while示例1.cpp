#include <iostream>
#include <string>

using namespace std;


//简介即是美


int main()
{
	int arr1[] = { 2,3,4,5,6,7,8,9 };

	int* source = arr1;
	size_t sz = sizeof(arr1) / sizeof(*arr1);


	// while(source!=arr1+sz)
		//*dest++ = *source++;
	int* dest = new int[sz];
	while (source!=arr1+sz)
	{
		
		*dest++ = *source++;    //特别巧妙的写法
	}

	dest = dest - sz;
	for (int i=0;i<sz;++i)
	{
		cout << dest[i] << endl;
	}


	delete[] dest;
	return 0;
}
