#include<stdio.h>
#include<string.h>
#include<string>
int characternumber (char * argv);
int wordnumber (char * argv);
int main (int argc, char* argv[])
{	
	if (strcmp(argv[1],"-c")==0)
	{
		characternumber(argv [2]);		
	}
	else if (strcmp(argv[1],"-w")==0)
	{
		wordnumber(argv [2]);
	}
	else
	{
		printf("���������Ƿ�Ϸ���\n");
	}
	return 0;
}
int characternumber (char* argv)
{
	FILE * fp;
	char ch;
	int count = 0;
	if ((fp = fopen(argv, "r") )== NULL)
	{
        printf("�ļ���ʧ�ܣ�\n");
    }
    else
	{
        ch = fgetc(fp);
        while (ch != EOF)
		{
            
            ch = fgetc(fp);
			count++;
        }
		printf("\n�ַ�����%d\n",count);
    }
    fclose(fp);
	return 0;
}
int wordnumber (char * argv)
{
	FILE * fp;
	char ch;
	int word;
	word = 1;
	if ((fp = fopen(argv, "r") )== NULL)
	{
        printf("�ļ���ʧ�ܣ�\n");
    }
    else
	{

		ch = fgetc(fp);
		while (ch != EOF)
		{
			
			ch = fgetc(fp);
            if(ch == ' ')
			{
				word++;
			}
			if(ch == ',')
			{
				word++;
			}
			if(ch == '\n')
			{
				word++;
			}
        }
		printf("\n��������%d\n",word);
    }
	fclose(fp);
	return 0;
}