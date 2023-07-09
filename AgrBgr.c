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
    fp=fopen("F:\\FILe\\grade.txt","rb");
    if (fp==NULL)
    {
        printf("file not open");
        exit(1);
    }
    
     printf("student details:\n");
    while(fread(&student,sizeof(student),1,fp)==1){
     
        printf("name :%9s\n",student.s_name);
        printf("marks:%9d\n",student.marks);
        if (student.marks>=80)
        printf("grade-->A\n");
        else if(student.marks>=60)
        printf("Grade--.B\n");
        
    }
    fclose(fp);
    return 0;   
}
