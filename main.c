#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char judge[3];
    char filename[50];
    scanf("%s%s", judge, filename);
    if((judge[1] == 'c'))
    {
        FILE* fp;
        char ch;
        int num = 0;
        if ((fp = fopen(filename, "r")) == NULL)
        {
            printf("File Open Error!\n");
        }
        num++;
        while ((ch = fgetc(fp)) != EOF)
        {
            if (ch == ' ' || ch == ',')
            {
                num++;
            }
        }
        fclose(fp);
        printf("µ¥´ÊÊý£º%d", num);
    }

    else if ((judge[1] == 'e'))
    {
       FILE* fp;
        char ch;
        int num = 0;
        if ((fp = fopen(filename, "r")) == NULL)
        {
            printf("File Open Error!\n");
        }

        while ((ch = fgetc(fp)) != EOF)
        {
            num++;
        }
        fclose(fp);
        printf("×Ö·ûÊý£º%d", num);
    }
    return 0;
}
