#include <stdio.h>

//����֪ʶ��:
					//��ͳ������
					//�ִ�������:�����쳣
					//try
					//catch
					//throw
					//�쳣����:
						//����
						//�ַ���
						//�����



//��ͳ������
	//����һ������,�ж��ܷ�ɹ����м����ļ�����
int my_cp(const char* src_file, const char* dest_file)    
{
	FILE* in_file, * out_file;

	in_file = fopen(src_file, "r");   //���ļ�
	if (!in_file)
	{
		return 1;
	}

	out_file = fopen(dest_file, "w");    //д���ļ�,���û��,����һ��
	if (!out_file)
	{
		return 2;
	}

	char rec[256];
	size_t bytes_in, bytes_out;
	
	while ((bytes_in = fread(rec, 1, 256, in_file)) > 0)   //�����ļ�����
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
	if ((result = my_cp("c:\\temp\\1.txt", "\\temp\\2.txt"))!=0)   //�ж��ļ��Ƿ��
	{
		switch (result)
		{
		case 1:
			printf("��Դ�ļ�ʱ����\n");
			break;
		case 2:
			printf("��Ŀ���ļ�ʱ����\n");
			break;
		case 3:
			printf("�����ļ�ʱ����\n");
			break;
		default:
			printf("����δ֪����\n");
			break;

		}
	}
	else
	{
		printf("ok\n");
	}
	
	
	
	return 0;
}
