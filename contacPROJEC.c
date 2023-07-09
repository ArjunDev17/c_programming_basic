#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct{
    char f_name[20];
    char l_name[10];
    int m_no;
}contact;
void add_contract(void);
void list_contact(void);
void add_contact(void);
void delete_contact(void);
int i;
 FILE *fp;
int main(){
    fp=fopen("F:\\FILe\\add_con.txt","rb+");
    if (fp==NULL)
    {
        printf("file not open: ");
        exit(1);
    }
    
    int choice;
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t        =                   TO                      =");
    printf("\n\t\t\t        =                 CONTACT                   =");
    printf("\n\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    printf("1:-For see your all contract\n");
    printf("2:-serach contract\n");
    printf("3:-add contract\n");
    printf("4:-delete your contract\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("your contract list is");
        list_contact();
        break;
    case 2:
        printf(" serach your contract:\n");
        break;
    case 3:
        printf("add your new contract is:\n");
        add_contact();
        break;
    case 4:
        printf("delete your contract:\n");
          delete_contact();
        break;

    default:
    printf("end of the program");
        break;
    }
}
//contact LIST
void list_contact(void){
       FILE *fp;
       int count=0;
{
    fp=fopen("F:\\FILe\\add_con.txt","rb");
    if (fp==NULL)
    {
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
    return 1; 
}
       ///contact add
}
void add_contact(void){
    FILE *fp;
    int add=1;
    fp=fopen("F:\\FILe\\add_con.txt","a+b");
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
//delete contact
void delete_contact(void)
{
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
    if(flag==1)
    printf("record delated");
        return 1; 
}
  