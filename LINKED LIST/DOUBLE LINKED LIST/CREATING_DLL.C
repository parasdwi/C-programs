#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

int main(){
    struct node *head,*temp,*newnode;
    int check=1;
    head=0;
    while (check)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
    
    if (head==0){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    printf("\nDo you want to enter more elements? :");
    scanf("%d", &check);
    }
    // tempn=head;
    // tempn->prev=0;
    // while (tempn->next!=0){
    //     tempp=tempn->next;
    //     tempp->prev=tempn;
    //     tempn=tempn->next;
    // }
    temp=head;
    while(temp!=0){
        printf(" %d",temp->data);
        temp=temp->next;
    }
}
    
