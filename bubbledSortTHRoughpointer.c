#include<stdio.h>
void swap(int *,int *);
void bubb_sort(int [],int);
void printArray(int [],int n);
int main(){
    int arr[]={5,2,7,1,8};
    
    bubb_sort(arr,5);
    printf("sorted array is--:\n");
    printArray(arr,5);
    return 0;
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void bubb_sort(int arr[],int n){
    int i,j;
    for(j=0;j<n-i-1;j++)
    if(arr[j]>arr[j+1])
    swap(&arr[j],&arr[j+1]);

}
void printArray(int arr[],int size){
    int i;
    for(i=0;i<size;i++)
    printf("%d \n",arr[i]);
    printf("\n");
}
