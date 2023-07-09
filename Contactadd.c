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
FILE *fp;
int main(){
    fp=fopen("F:\\FILe\\add_con.txt","wb");
    if (fp==NULL){
        printf("file not open: ");
        exit(1);
    }
 printf("your contact:\n");
 while (add==1){
     printf("First name: ");
     scanf("%s",&contact.f_name);
     printf("Last name: ");
     scanf("%s",&contact.l_name);
     printf("mobil number: ");
     scanf("%d",&contact.m_no);
     fwrite(&contact,sizeof(contact),1,fp);
     printf("want add more contact press 1 oteherwise press 0: ");
     scanf("%d",&add);
    }
    fclose(fp);
    return 0;


 
}