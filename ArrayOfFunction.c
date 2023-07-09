#include<stdio.h>
float add(float,int);
float sub(float,int);
float mul(float,int);
float dev(float,int);
int main(){
    float a;
    int i,b;
    float (*fp[])(float,int)={add,sub,mul,dev};
    char *operation[]={"add","sub","mul","dev"};
    printf("enter a float and integer value: ");
    scanf("%f%d",&a,&b);
    for (i=0;i<4;i++)
    {
        printf("%s: %f\n",operation[i],(*fp[i])(a,b));
            }

    return 0;
}
float add(float a,int b){
    return a+b;
}
float sub(float a,int b){
    return a-b;
};
float mul(float a,int b){
    return a*b;
}
float dev(float a,int b){
    return a/b;
}