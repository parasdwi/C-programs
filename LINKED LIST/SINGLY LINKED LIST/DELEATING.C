#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main(){                                                         
    struct node *head,*temp,*newnode,*delnode;                            /// CREATING LINKED LIST
    int check=1,check2,position,count=0,i=1;
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
    printf("Enter the choise in 1 or 0:\n");
    scanf("%d",&check);
    }
    temp=head;                                                    ///   PRINTING OF LINKED LIST
    while(temp!=0){
    printf(" %d",temp->data);
    temp=temp->next;
    }
    printf("\nDo you want to deleate? :\n");
    scanf("%d",&check2);
    if (check2==1);
    {
        printf("Enter the position to delete: \n");
        scanf("%d",&position);
        temp=head;
        while (i<position-1)
        {
            temp=temp->next;
            i++;
        }
        delnode=temp->next;
        temp->next=delnode->next;
        free(delnode);
        temp=head;                                                    ///   PRINTING OF LINKED LIST
        while(temp->next!=0){
            printf(" %d",temp->data);
            temp=temp->next;
        }
}
}
    