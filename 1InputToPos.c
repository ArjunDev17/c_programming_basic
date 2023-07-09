#include<stdio.h>
#include<ctype.h>
#define MAX 10
int top=-1;
int stack[MAX];
void infixToPostfix(char*,char*);
void push(char symbol){
        stack[++top]=symbol;
}
char pop(){
        return (stack[top--]);
}
int priority(char op){
        switch (op){
        case '#':
         case '(':
                return 0;
        case '+':
        case '-':
                return 1;
        case '*':
        case '/':
                return 2;    
        case '^':
                return 3;            
        }
}
int main(){
        char infix[MAX],postfix[MAX];
        printf("Enter infix expression : ");
        scanf("%s",infix);
        infixToPostfix(infix,postfix);
        printf("\nPostfix expression is :%s",postfix);
}
void infixToPostfix(char *infix,char *postfix){
        char symbol,brace;
        int i=0,k=0;
        push('#');
        while((symbol=infix[i++])!='\0'){
                if(isalnum(symbol))
                        postfix[k++]=symbol;
                else if(symbol=='(')
                        push(symbol);
                else if(symbol==')'){
                        while(stack[top]!='(')
                        postfix[k++]=pop();
                       brace=pop();
                }
                else{
                        while(priority(symbol)<=priority(stack[top])){
                                postfix[k++]=pop();
                        }
                       push(symbol);
                }
        }
        while(stack[top]!='#')
                postfix[k++]=pop();
                postfix[k]='\0';
}