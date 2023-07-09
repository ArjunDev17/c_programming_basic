#include<stdio.h>
#define max 100
void arry_fun(int []);
int main(){
    int arr[5]={1,2,3,4,5},j;
    printf("element of array is : ");
    for(j=0;j<5;j++){
         printf("%d ",arr[j]);
    }
 printf("\nelement of array after calling is : ");
        for(j=0;j<5;j++){
        arry_fun(arr[j]);
    }
     return 0;
}
    void arry_fun(int x[] ){
        printf("%d ",x);
    }
    //working program properly
    /*void arry_fun(int []);
int main(){
    int arr[]={2,4,6,3,2,},j;
    printf("element of array is : ");
    for(j=0;j<5;j++){
            printf("%d ",arr[j]);
    }
 printf("\nelement of array after calling is : ");
     ;
     for(j=0;j<5;j++){
            arry_fun(arr[j]);
    }
     return 0;
}
    void arry_fun(int x[] ){
       
        printf("%d ",x+1);
        

    }*/





/*#include<stdio.h>
#define max 100
void arry_fun(int []);
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
        arry_fun(arr[start]);
        //printf("%d ",arr[start]);
    }
    return 0;
}
    void arry_fun(int sum[]){
        int j;
        for(j=0;j<5;j++){
            printf("%d",sum[j]);
        }

    }
*/