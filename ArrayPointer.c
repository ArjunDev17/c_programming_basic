#include<stdio.h>
int main(){
    int arr[]={2,4,6,8},i;
    int *ar[4],*p;
    p=&arr;
    ar[4]=&arr;

     printf(" %d",sizeof(p));
     printf(" %d\n\n",sizeof(ar[4]));
     printf(" %d\n\n ",*ar);
    printf("through array");
    for(i=0;i<4;i++){
        printf(" %d",arr[i]);
    }
    printf("\n through pointer");
     for(i=0;i<4;i++){
      printf(" %d ",*(ar+i));
    }
    return 0;
}