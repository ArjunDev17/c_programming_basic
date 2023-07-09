#include<stdio.h>
#define max 100
int main(){
    int arr[max];
    int start,n;
    printf("how many element you want in array: ");
    scanf("%d",&n);
    printf("enter the element of array: ");
    //array input
    for(start=0;start<n;start++){
        scanf("%d ",&arr[start]);
    }
    printf("your element:\n");
    for(start=0;start<n;start++){
        printf("%d ",arr[start]);
    }
    return 0;
}