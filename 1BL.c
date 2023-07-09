//Binary Search And Linear Search Using 
#include<stdio.h>
#define SIZE 100
int Li_search(int arr[], int n,int x){
        
	 int i;
	 for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	 return 0;
}
int bi_Search(int arr[],int n){//Binary Search Function
        int lb,ub,SE,j;
         lb=0;ub=n-1;
        int mid;       
        printf("------------------------\n");
        printf("Your Array Element is :\n");
        for (j = 0; j < n; j++){
                printf("%d ",arr[j]);
        }
        printf("\nPlease enter Your Search ELement :");
        scanf("%d",&SE);
       mid=lb+(ub-lb)/2;
       //int mid = low + (high - low) / 2;
        while(lb<=ub){
                
                if(arr[mid]==SE)
                        return mid;
                if(arr[mid]>SE)
                        lb=mid+1;
                
                else
                        ub=mid-1;
                             
        }
         return -1;
        
}
//Sorting Function
int short_Array(int arr1[],int n){
        int i,j,temp=0,B_Se;
        for ( i = 0; i < n-1; i++){
         for(j=0;j<n-1-i;j++){
                 if(arr1[j]>arr1[j+1]){
                        temp=arr1[j];
                        arr1[j]=arr1[j+1];
                        arr1[j+1]=temp;
                 }
         }
                
        }
        
        B_Se=bi_Search(arr1,n);
        return B_Se;
           
}
void mY_Array(){
        int arr[SIZE],s,i,E=1,B1_Se,choice,SE;
        printf("How many Element you want Please enter :\n");
        scanf("%d",&s);
        printf("Enetr Your Array Element\n");
        for (i = 0; i < s; i++){
                scanf("%d",&arr[i]);
        }
        printf("Your Array Element is :\n");
        for (i = 0; i < s; i++){
                printf("%d ",arr[i]);
        }
        printf("\n");
        do{ 
                printf("\n----------------------\n");
                printf("1: for Binary Search \n");
                printf("2: for Linear Search\n");
                printf("3: for exit\n");
                scanf("%d",&choice);
                switch (choice)
                {
                case 1:
                        B1_Se=short_Array(arr,s);
                        if(B1_Se==-1){
                          printf("Not found\n");
                         }else{
                        printf("Element found at index  %d\n",B1_Se);
                         }
                        break;
                case 2:
                       // Linear_SearchArray(arr,s);
                        printf("Enetr Search Element :\n");
                       scanf("%d",&SE);
                       int res = Li_search(arr,s,SE);//Function Call
                       if (res == -1)
                       printf("Not found");
                       else
                       printf("Element is found at index :%d", res);
                       
                        break;
                case 3:
                        printf("If you Really  want exit Please Enter 0\nOtherWise 1 for continue\n");
                        scanf("%d",&E);
                        break;        
                default:
                        break;
                }
        }while(E==1);
        
        
}

int main(){
        printf("Calling Your mY_Array () Method :\n");
        mY_Array();
}