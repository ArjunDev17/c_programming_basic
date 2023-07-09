#include<stdio.h>
#include<stdlib.h>
int main( ){
        char *ptr1,*ptr2;
        ptr1=(char*)malloc(4);
        ptr1="CMRIT";
        printf("%s",ptr1);
        ptr2=(char*)realloc(ptr1,sizeof(10));
        ptr2="CMRIT-MCA 1st";
        printf("\nAftr realloc() function:-> %s",ptr2);
        free(ptr1);
}