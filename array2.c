#include<stdio.h>
int main(){
    int i,arr[]={1,4,9,2,3,7},search_item;
    printf("enter your serch item: ");
    scanf("%d",&search_item);
    for (i=0;i<6;i++)
    {
       // printf("%d ",arr[i]);
       if (arr[i]==search_item)
       {
           printf("find number in %d position ",i);
           break;
       }
       
    }
    return 0;
    
}