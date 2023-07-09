#include<stdio.h>
#include<stdlib.h>
int main(){
        int *ptr,i; 
        ptr=(int*)calloc(3,sizeof(int));
        if(ptr==NULL){
                printf("Memory is not created ");
                exit(1);
        } 
        printf("\nDefault value stored in calloc is Zero:");
       for(i=0;i<3;i++){
               printf("\nAddress: %u --and value is:%d",&ptr[i],ptr[i]);
       }
        printf("\nEnter the value :");
        for ( i = 0; i <3; i++)
        {
                scanf("%d",&ptr[i]);
        }
         printf("\nNow value stored in calloc is:");
       for(i=0;i<3;i++){
               printf("\nAddress: %u --and value is:%d",&ptr[i],ptr[i]);
       }
}