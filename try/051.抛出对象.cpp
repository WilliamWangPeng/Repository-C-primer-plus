#include <stdio.h>

class BadSrcFile{};
class BadDestFile{};
class BadCopy{};

void my_cp(const char* src_file, const char* dest_file)    //����һ������,�ж��ܷ�ɹ����м����ļ�����
{
	FILE* in_file, * out_file;

	in_file = fopen(src_file, "r");   //���ļ�
	if (!in_file)
	{
		throw BadSrcFile();   //throw�����׳��쳣;
	}

	out_file = fopen(dest_file, "w");    //д���ļ�
	if (!out_file)
	{
		throw BadDestFile();
	}

	char rec[256];
	size_t bytes_in, bytes_out;

	while ((bytes_in = fread(rec, 1, 256, in_file)) > 0)   //�����ļ�����
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
		my_cp("c:\\1.txt", "c:\\2.txt");    //�򲻿�Դ�ļ�,��̽��
	}
	catch (BadSrcFile e)
	{
		printf("�����쳣:��Դ�ļ�ʱ");
	}
	catch (BadDestFile e)
	{
		printf("�����쳣:��Ŀ���ļ�ʱ");
	}
	catch (BadCopy e)
	{
		printf("�����쳣:copyʱ");
	}
	catch (...)    //catch ���е��쳣
	{
		printf("����δ֪�쳣");
	}

	return 0;
}