#include<stdlib.h>
#include<stdio.h>
struct
{
    char s_name[10];
    int roll_no;
    int marks;
}student;
int main(){
    FILE *fp;
    int choice=1;
    fp=fopen("F:\\FILe\\grade.txt","ab");
    if (fp==NULL)
    {
        printf("file not open");
        exit(1);
    }
    
       while(choice){
        printf("student details:\n");
        printf("enter the name: ");
        scanf("%s",&student.s_name);
        printf("enter the roll number: ");
        scanf("%d",&student.roll_no);
        printf("enter marks: ");
        scanf("%d",&student.marks);
        fwrite(&student,sizeof(student),1,fp);
        printf("add more racordthen use  enter 1 if not then 0");
        scanf("%d",&choice);
    }
    fclose(fp);
    return 0;   
}
