#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main(){
    struct node *head,*temp,*newnode;
    int check=1;
    head=0;
    while (check){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data :");
        scanf("%d", &newnode->data);
        newnode->next=0;
    if (head==0)
    {
        head=temp=newnode;
    }
    else {
        temp->next=newnode;
        temp=newnode;
    }
    printf("Enter the choise in 1 or 0:");
    scanf("%d",&check);
    }
    temp=head;
    while(temp!=0){
    printf(" %d",temp->data);
    temp=temp->next;
    }
}
