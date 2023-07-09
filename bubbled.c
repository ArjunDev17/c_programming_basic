#include<stdio.h>
int main(){
    int arr[]={40,20,50,60,10,30};
    int i,j,xchange,temp=0;
    
    //bubble short
   for (i=0;i<6;i++){
            xchange=0;
            for(j=0;j<6-1-i;j++){
              if (arr[j]>arr[j+1]){
                  temp=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=temp;
                  xchange++;
              }
              }
       if(xchange==0)
       break;
    }
  printf("sorted list is:\n");
  for (i=0;i<6;i++){
       printf(" %d ",arr[i]);
       printf("\n");
    
  }
    return 0;
    
}