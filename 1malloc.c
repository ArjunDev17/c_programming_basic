#include<stdio.h>
#include<stdlib.h>
int main(){
        int *ptr;
        
        ptr=(int*)malloc(sizeof(int));
        if(ptr==NULL){
                printf("Memory is not created ");
                exit(1);
        }
        *ptr=10;
        printf("\nptr hold the address is :%u",ptr);
        printf("\nptr value is :%d",*ptr);
        printf("\nptr address is :%u",&ptr);
}