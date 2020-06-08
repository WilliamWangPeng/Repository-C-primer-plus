#include <stdio.h>

class BadSrcFile{};
class BadDestFile{};
class BadCopy{};

void my_cp(const char* src_file, const char* dest_file)    //定义一个函数,判断能否成功进行几项文件操作
{
	FILE* in_file, * out_file;

	in_file = fopen(src_file, "r");   //打开文件
	if (!in_file)
	{
		throw BadSrcFile();   //throw就是抛出异常;
	}

	out_file = fopen(dest_file, "w");    //写入文件
	if (!out_file)
	{
		throw BadDestFile();
	}

	char rec[256];
	size_t bytes_in, bytes_out;

	while ((bytes_in = fread(rec, 1, 256, in_file)) > 0)   //拷贝文件内容
	{
		bytes_out = fwrite(rec, 1, bytes_in, out_file);
		if (bytes_in != bytes_out)
		{
			throw BadCopy();
		}
	}
	fclose(in_file);
	fclose(out_file);


}

int main()
{
	
	try
	{
		my_cp("c:\\1.txt", "c:\\2.txt");    //打不开源文件,待探究
	}
	catch (BadSrcFile e)
	{
		printf("发生异常:打开源文件时");
	}
	catch (BadDestFile e)
	{
		printf("发生异常:打开目标文件时");
	}
	catch (BadCopy e)
	{
		printf("发生异常:copy时");
	}
	catch (...)    //catch 所有的异常
	{
		printf("发生未知异常");
	}

	return 0;
}