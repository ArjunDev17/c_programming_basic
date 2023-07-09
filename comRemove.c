#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    int flag=0;
    char ch;
    fp1=fopen("F:\\FILe\\copy1.txt","r");
    fp2=fopen("F:\\FILe\\file2.c","w");
    if(fp1==NULL)
    {
        printf("Error while opening a file for reading");
        return 0;
    }
    if(fp2==NULL)
    {
        printf("Error while opening a file for reading");
        return 0;
    }
    while((ch=fgetc(fp1))!=EOF)
    {
         if((ch=='/ ')&&(flag==0))
        {
            flag=1;
            continue;
        }
        else if((ch=='/')&&(flag==1))
        {
            flag=2;
            continue;
        }
        else if((ch=='*')&&(flag==1))
        {
            flag=3;
            continue;
        }
        if(flag==2)
        {
            if(ch=='n')
            {
              flag=0;
            }
            continue;
        }
        if(flag==3)
        {
            if(ch=='*')
            {
              flag=4;
            }
            continue;
        }
        if(flag==4)
        {
            if(ch=='/')
            {
              flag=0;
            }
            continue;
        }
        if(flag==0)
        {
 
            if((ch==13)||(ch==10))
            {
                continue;
            }
            else if((ch!=' '))
            {
               fputc(ch,fp2);
            }
        }
    }
    fclose(fp1);
    fclose(fp2);
    remove("file1.c");
    rename("file2.c","file1.c");
    fp1=fopen("file1.c","r");
    while((ch=fgetc(fp1))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp1);
    return 0;
}