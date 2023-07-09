#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define conW "F:\\FILe\\conw.txt"
struct{
    char f_name[20];
    char l_name[10];
    int m_no;
}contact;
int main(){
    FILE *fp;
    char name[10];
    unsigned int flag=0;
    long size=sizeof(contact);
    fp=fopen("F:\\FILe\\add_con.txt","rb");
    if (fp==NULL){
        printf("file not open: ");
        exit(1);
    }
 printf("enter your contact name which you want to modified:\n");
 scanf("%s",&name);
 while(fread(&contact,sizeof(contact),1,fp)==1)
 if(strcmp(contact.f_name,name)==0){
     printf("enter new details about contact:\n");
     printf("First name: ");
     scanf("%s",&contact.f_name);
     printf("Last name: ");
     scanf("%s",&contact.l_name);
     printf("mobil number: ");
     scanf("%d",&contact.m_no);
     fseek(fp,-size,1);
     fwrite(&contact,sizeof(contact),1,fp);
     flag=1;
     break;
    }
    fclose(fp);
    if(flag==0)
    printf("name not found-->");
    if(flag==1)
    printf("record mofified");   
    return 0; 
}