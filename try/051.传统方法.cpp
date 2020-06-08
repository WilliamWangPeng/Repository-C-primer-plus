#include <stdio.h>

//本节知识点:
					//传统处理方法
					//现代处理方法:处理异常
					//try
					//catch
					//throw
					//异常类型:
						//数字
						//字符串
						//类对象



//传统处理方法
	//定义一个函数,判断能否成功进行几项文件操作
int my_cp(const char* src_file, const char* dest_file)    
{
	FILE* in_file, * out_file;

	in_file = fopen(src_file, "r");   //打开文件
	if (!in_file)
	{
		return 1;
	}

	out_file = fopen(dest_file, "w");    //写入文件,如果没有,创建一个
	if (!out_file)
	{
		return 2;
	}

	char rec[256];
	size_t bytes_in, bytes_out;
	
	while ((bytes_in = fread(rec, 1, 256, in_file)) > 0)   //拷贝文件内容
	{
		bytes_out = fwrite(rec, 1,bytes_in,out_file);
		if (bytes_in!=bytes_out)
		{
			return 3;
		}
	}
	fclose(in_file);
	fclose(out_file);
	return 0;
	
}

int main()
{
	int result;
	if ((result = my_cp("c:\\temp\\1.txt", "\\temp\\2.txt"))!=0)   //判断文件是否打开
	{
		switch (result)
		{
		case 1:
			printf("打开源文件时出错\n");
			break;
		case 2:
			printf("打开目标文件时出错\n");
			break;
		case 3:
			printf("拷贝文件时出错\n");
			break;
		default:
			printf("发生未知错误\n");
			break;

		}
	}
	else
	{
		printf("ok\n");
	}
	
	
	
	return 0;
}
