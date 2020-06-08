
#include <stdio.h>



void my_cp(const char* src_file, const char* dest_file)    //定义一个函数,判断能否成功进行几项文件操作
{
	FILE* in_file, *out_file;

	in_file = fopen(src_file, "rd");   //打开文件
	if (!in_file)
	{
		throw 1;   //throw就是抛出异常;
	}

	out_file = fopen(dest_file, "wd");    //写入文件
	if (!out_file)
	{
		throw 2;
	}

	char rec[256];
	size_t bytes_in, bytes_out;

	while ((bytes_in = fread(rec, 1, 256, in_file)) > 0)   //拷贝文件内容
	{
		bytes_out = fwrite(rec, 1, bytes_in,out_file);
		if (bytes_in != bytes_out)
		{
			throw 3;
		}
	}
	fclose(in_file);
	fclose(out_file);
	

}

int main()
{
	


	try
	{
		my_cp("c:\\temp\\1.txt", "\\temp\\2.txt");
	}
	catch (int e)
	{
		printf("发生异常:%d\n",e);
	}
	
	


	return 0;
}