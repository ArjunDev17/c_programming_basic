#include<stdio.h>
void bubblr_fun(int [],int );
void swap(int *p,int *q);
int main(){
    int Arr[]={3,4,1,9,6,8};
    int i;
    bubblr_fun(Arr,6);
    for(i=0;i<=5;i++)
    printf("%d ",Arr[i]);
    return 0;
}
void bubblr_fun(int Arr[],int N){
    int round,i,temp;
    for(round=1;round<=N;round++){
        for(i=0;i<N-1-round;i++){
          //  if (Arr[i]>Arr[i+1])
           swap(&Arr[i],&Arr[i+1]);
            /*{
              temp=Arr[i];
              Arr[i]=Arr[i+1];
              Arr[i+1]=temp;  
            }
            */
        }
    }
}
void swap(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}