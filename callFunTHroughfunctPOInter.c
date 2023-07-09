#include<stdio.h>
float add(int,float),result;
int main(){
    float (*fp)(int,float);
    float result;
    fp=add;
    result=(*fp)(4,3.8);///result=add(4,3.8);
    printf("%f\n",result);
return 0;
}
float add(int a,float f){
    return a+f;
}
///another method

/*#include<stdio.h>
float add(int,float),result;
int main(){
    float (*fp)(int,float);
    float result;
    fp=add;
    result=add(4,3.8);
    printf("%f\n",result);
return 0;
}
float add(int a,float f){
    return a+f;
}*/