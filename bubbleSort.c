#include<stdio.h>
void bubbl_Sort(int arr[],int n){
        int i,j,temp,n1=0;
        for(i=0;i<n-1;i++){
                for(j=0;j<n-1-i;j++){
                        if(arr[j]>arr[j+1]){
                                temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;  
                        }
                
                }
                
                 if(i==1){
                      printf("Highest number in List :%d ",arr[n-i]);
                      break;
                 }
        }
        printf("\nArray is :\n");
        for (i = 0; i < 5; i++){
                printf("%d ",arr[i]);
        }
}
int main(){
        //we can also take input from user 
        int arr[5]={3,12,4,67,9},i;
        bubbl_Sort(arr,5);/*using bubble Sort
        in one round highest element go at last index*/
}