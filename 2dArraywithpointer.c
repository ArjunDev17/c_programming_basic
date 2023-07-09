#include<stdio.h>
int main(){
    int arr [3][3]={
                    {2,4,6},
                    {1,3,5},
                    {9,7,5},

                 };
                 int i,j;
                 printf("your array is: \n");
                 for(i=0;i<=3;i++){
                     for(j=1;j<=3;j++){
                         //printf("%d ",arr[i][j]);
                         printf("%d ",(*(*(arr+i)+j)));
                     }
                     printf("\n");
                 }

return 0;
}