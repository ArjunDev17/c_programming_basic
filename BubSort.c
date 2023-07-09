#include<stdio.h>
void arr11(int arr[],int n){
    int i,j,temp=0;
        for ( i = 0; i < 6-1; i++){
         for(j=0;j<6-1-i;j++){
                 if(arr[j]>arr[j+1]){
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                }
        }        
       }
}
int main(){
        int arr[]={8,1,5,12,3,19},i,j;
        printf("Shorted Array is :\n");
        arr11(arr,6);
        for ( i = 0; i < 6; i++){
                printf("%d ",arr[i]);
        }
        
        
}