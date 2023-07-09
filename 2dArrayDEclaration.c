#include<stdio.h>
#define row 3
#define column 3
void darr_func(int [][]);
int main(){
    int arr[row][column];
    int n,i,j;

    printf("enter the element of array: ");
    //array input
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
           scanf("%d ",&arr[i][j]);
        }
       
    }
    printf("your element:\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("after calling:/n");
    darr_func(arr[i][j]);

    return 0;
}
void darr_func(int r[][]){
    int i,j;
  printf("your element:\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
           printf("%d ",r[i][j]);
        }
        printf("\n");
    }
}