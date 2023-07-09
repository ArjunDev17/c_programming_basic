#include<stdio.h>
#include<stdlib.h>
void add_num();
void sub_num();
void mul_num();
void dev_num();
int a,b,c;
int main(){
    FILE *fp;
    fp=fopen("F:\\FILe\\calculater.txt","w");
    if (fp==NULL){
    
        printf("file not open");
        exit(1);
    }
     int operation;    
     printf("1 for addition:\n");
     printf("2 for substraction:\n");
     printf("3 for multiplication:\n");
     printf("4 for division:\n");
     printf("which task you want perform\n");
     scanf("%d",&operation);

    switch (operation){
        case 1:
                 add_num();
        break;
        case 2:
                  sub_num();
        break;
        case 3:
                  mul_num();
        break; 
        case 4:
                  dev_num();
        break;
        default:
                  printf("plz check again");
        break;
    }
}
void add_num(){
    printf("enter you digit");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("summition--%d",c);
}
void sub_num(){
    printf("enter you digit");
    scanf("%d %d",&a,&b);
    c=a-b;
    printf("substraction--%d",c);
}
void mul_num(){
    printf("enter you digit");
    scanf("%d %d",&a,&b);
    c=a*b;
    printf("multiplication--%d",c);
}
void dev_num(){
    printf("enter you digit");
    scanf("%d %d",&a,&b);
    c=a/b;
    printf("division--%d",c);
}
