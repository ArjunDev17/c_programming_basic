#include<stdio.h>
#include<stdlib.h>
int main(){
        int n,*ptr,i;
        printf("Your number is that ");
        scanf("%d",&n);
        ptr=(int*)calloc(n,sizeof(int));
        if(ptr==NULL){
                printf("Memory is not created ");
                return 0;
        }
        printf("Enetr Your Data ");
        for(i=0;i<n;i++){
                scanf("%d",&ptr[i]);
        }
         printf("Your Data is ");
        for(i=0;i<n;i++){
          printf("%d ",*(ptr+i));
        }
}