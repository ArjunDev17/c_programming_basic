#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void add_contact(FILE *fp);
struct con{
    char f_name[20];
    char l_name[10];
    int m_no;
};
void add_contract();
int i;
 
int main(){
    FILE *fp;
    fp=fopen("F:\\FILe\\phoneBook.txt","wb");
    if (fp==NULL)
    {
        printf("file not open: ");
        exit(1);
    }
    
    int choice;
    printf("your welcome in contrct Management sysytem:\n");
    printf("please enter your choiece:\n");
    printf("1:-For see your all contract\n");
    printf("2:-serach contract\n");
    printf("3:-add contract\n");
    printf("4:-delete your contract\n");
    //printf("5:-For see your all contract\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("your contract list is");
        break;
    case 2:
        printf(" serach your contract");
        break;
    case 3:
        printf("add your new contract is:\n");
        add_contact(fp);
        break;
    case 4:
        printf("delete your contract");
        break;

    default:
    printf("end of the program");
        break;
    }
}
//create ADD CONTACT
