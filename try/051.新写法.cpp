
#include <stdio.h>



void my_cp(const char* src_file, const char* dest_file)    //����һ������,�ж��ܷ�ɹ����м����ļ�����
{
	FILE* in_file, *out_file;

	in_file = fopen(src_file, "rd");   //���ļ�
	if (!in_file)
	{
		throw 1;   //throw�����׳��쳣;
	}

	out_file = fopen(dest_file, "wd");    //д���ļ�
	if (!out_file)
	{
		throw 2;
	}

	char rec[256];
	size_t bytes_in, bytes_out;

	while ((bytes_in = fread(rec, 1, 256, in_file)) > 0)   //�����ļ�����
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
		printf("�����쳣:%d\n",e);
	}
	
	


	return 0;
}