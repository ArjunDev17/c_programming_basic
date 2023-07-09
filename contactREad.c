#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct{
    char f_name[20];
    char l_name[10];
    int m_no;
}contact;
//void add_contract();
int i,add=1;
static int count=0;
FILE *fp;
int main(){
    fp=fopen("F:\\FILe\\add_con.txt","rb");
    if (fp==NULL){
        printf("file not open: ");
        exit(1);
    }
 printf("your contact list is:\n");
 while(fread(&contact,sizeof(contact),1,fp)==1){
     printf("---------------------------------\n");

     printf("First name  :%s\n",contact.f_name);
     printf("Last name   :%s\n",contact.l_name);
     printf("monil number:%d\n",contact.m_no);
     count++;
    }
    printf("%d contacts withphone number -->",count);
    fclose(fp);
    return 0; 
}