#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp1,*fp2;
    int found='y';
    int c1,c2;
    fp1=fopen("F:\\FILe\\copy1.txt","r");
    if(fp1==NULL){
        printf("file not open:\n");
        exit(1);
    }
    printf(" your text:\n");
    c1=fgetc(fp1);
    while(c1!=EOF)
    printf("%c",c1);
    fclose(fp1);
    return 0;
}