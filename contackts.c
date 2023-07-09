#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct con{
    char f_name[20];
    char l_name[10];
    int m_no;
};
void add_contract();
int i;
int main(){
    FILE *fp;
    fp=fopen("F:\\FILe\\contact.txt","ab+");
    if (fp==NULL)
    {
        printf("file not open: ");
        exit(1);
    }
    struct con conn[4];
    for(i=1;i<4;i++){
     printf("%d:-contract name is: ",i);
     scanf("%s",&conn[i].f_name);
     printf("enter last name: ");
     scanf("%s",&conn[i].l_name);
     printf("enter mobile number: ");
     scanf("%d",&conn[i].m_no);
    }
    fwrite(&conn,sizeof(conn),1,fp);
    fclose(fp);
    return 0;
}