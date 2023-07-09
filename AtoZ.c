//12.	Write a C program to print “A-Z” or “a-z” using ASCII value and without ASCII value.
#include<stdio.h>
void With_ASCI();
void without_Asci();
int main(){
        With_ASCI();
        without_Asci();
}
void With_ASCI(){
        printf("With ASCI code \n");
        for(int i=65;i<91;i++){
                printf("%c=%d \t",i,i);

        }
}
void without_Asci(){
        printf("\nWithout ASCI code \n");
       for(int i='A';i<='Z';i++){
                printf("%c \t",i);

        } 
}

