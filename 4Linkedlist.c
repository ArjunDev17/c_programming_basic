#include<stdio.h>
struct node{
        int data;
        struct node *next;
};
struct node *head=NULL,*temp,*temp2;
struct node* creat_Node(){
        struct node *ptr;
        ptr=(struct node*)malloc(sizeof(struct node));
        return ptr;
}
//INSERT FRONT DATA INSIDE LL
void insert_Front(int item){
        temp=creat_Node();
        temp->data=item;
        temp->next=head;
        head=temp;
}
//INSERT REAR DATA INSIDE LL
void insert_Rear(int item){
        temp=creat_Node();
        temp->data=item;
        if(head==NULL){
                return temp;
        }
        temp2=head;
        while(temp2->next!=NULL){
                temp2=temp2->next;
        }
                temp2->next=temp;
}
void display(){
        temp=head;
        while (temp!=NULL){
                printf("%d ",temp->data);
                temp=temp->next;
        }
        
}
int main(){
        int item,choice;
        while (1) {
                printf("\n1 inser front");
                printf("\n2:Display");
                printf("\n3:Rear insertion ");
                printf("\nchoice: ");
                scanf("%d",&choice);
                switch (choice){
                case 1:
                      printf("Please Enter Data : ");
                      scanf("%d",&item);
                      insert_Front(item);
                        break;
                case 2:
                        display();
                        break;
                case 3:
                      printf("Please Enter Data : ");
                      scanf("%d",&item);
                      insert_Rear(item);
                        break;  
                case 4:
                        exit(1);
                default:
                        break;
                }
        }
        
}