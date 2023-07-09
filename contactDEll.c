#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#define conDell ""
//#define conW "F:\\FILe\\conw.txt"
struct{
    char f_name[20];
    char l_name[10];
    long m_no;
}contact;
int main(){
    FILE *fp,*fptmp;
    char name[10];
    unsigned int flag=0;
    fp=fopen("F:\\FILe\\add_con.txt","rb");
    if (fp==NULL){
        printf("file not open: ");
        exit(1);
    }
 printf("enter your contact name which you want to deleted:\n");
 scanf("%s",&name);
 fptmp=fopen("F:\\FILe\\conDE.txt","wb");
 while(fread(&contact,sizeof(contact),1,fp)==1){
 if(strcmp(name,contact.f_name)!=0)
          fwrite(&contact,sizeof(contact),1,fptmp);
else
       flag=1;
    }
    fclose(fp);
    fclose(fptmp);
    remove("F:\\FILe\\add_con.txt");
    rename("F:\\FILe\\conDE.txt","F:\\FILe\\add_con.txt");
    if(flag==0)
    printf("name not found-->");
    else
    printf("record delated");
    
    return 0; 
}