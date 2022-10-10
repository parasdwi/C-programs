#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main(){                                                         
    struct node *head,*temp,*newnode;                            /// CREATING LINKED LIST
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
    printf("\nDo you want to insert any element (0,1)? :\n");     ////  INSERTATION STARTS 
    scanf("%d",&check2);
    if (check2==1){
        newnode=(struct node *)malloc(sizeof(struct node));

        printf("Where you want to insert element? :\n");
        scanf("%d",&position);

        temp=head;
        while(i<position){
            temp=temp-> next;
            i++;
        }
        printf("Enter the data:");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        temp->next=newnode;

        temp=head;                                                  /// PRINTING OF LIST
        while (temp!=0){
            printf("%d ",temp->data );
            temp=temp->next;
        }
    }
}
