#include<stdlib.h>
#include<stdio.h>
int main(){
    int *ap,*app,i,n,nm[2],onOf;
    printf("enter your size");
    scanf("%d",&n);
    ap=(int*)malloc(n*sizeof(n));
    if (ap==NULL)
    {
        printf("memory not created");
        exit(1);
    }
    printf("enter your number");
    for(i=0;i<=n;i++){
        scanf("%d",ap+i);
    }
    printf("your number is \n");
     for(i=0;i<=n;i++)
        printf("%d",*(ap+i));
        printf("if you want then add more number in your serries:\n");
        printf("if yes then input 1 if no then 0:\n");
        scanf("%d",&onOf);
        if (onOf==0){
            exit(1);
        
       
    
}
 return 0;
}