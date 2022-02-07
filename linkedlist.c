#include <stdio.h>
#include <stdlib.h>
struct node{
	int info;
	struct node* link ;
};
struct node* start = 	NULL;
void traverse()
{
    struct node* temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else {
        temp = start;
        while (temp != NULL) {
            printf("%d\t",temp->info);
            temp = temp->link;
        }
    }
    printf("\n");
}
void insertAtFront()
{
    int data;
    struct node* temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter the number to be inserted : ");
    scanf("%d", &data);
    temp->info = data;
    temp->link = start;
    start = temp;
    traverse();
}
void insertAtEnd()
{
    int data;
    struct node *temp, *head;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    temp->link = NULL;
    temp->info = data;
    head = start;
    while (head->link != NULL) {
        head = head->link;
    }
    head->link = temp;
    traverse();
}
void insertAtPosition()
{
    struct node * temp, *newnode;
    int pos, data, i = 1;
    newnode = malloc(sizeof(struct node));
    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &data);
 
  
    temp = start;
    newnode->info = data;
    newnode->link = 0;
    while (i < pos - 1) {
        temp = temp->link;
        i++;
    }
    newnode->link = temp->link;
    temp->link = newnode;
    traverse();
}
void deleteFirst()
{
    struct node* temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else {
        temp = start;
        start = start->link;
        free(temp);
    }
    traverse();
}
void deleteEnd()
{
    struct node *temp, *prevnode;
    if (start == NULL)
        printf("\nList is Empty\n");
    else {
        temp = start;
        while (temp->link != NULL) {
            prevnode = temp;
            temp = temp->link;
        }
        free(temp);
        prevnode->link = NULL;
    }
    traverse();
}
void deletePosition()
{
    struct node *temp, *position;
    int i = 1, pos;
 
    
    if (start == NULL)
        printf("\nList is empty\n");
    else {
        printf("\nEnter the position to be deleted : ");
        scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = start;
        while (i < pos - 1) {
            temp = temp->link;
            i++;
        }
        position = temp->link;
        temp->link = position->link;
        free(position);
    }
    traverse();
}
int main()
{
    int choice;
    do {
        printf("1 insertion at the start\n");
        printf("2 insertion at end\n");
        printf("3 insertion at any position\n");
        printf("4 deletion of first element\n");
        printf("5 deletion of last element\n");
        printf("6 deletion of element at any position\n");
        printf("7 EXIT\n");
        printf("Enter Choice :\n");
        scanf("%d", &choice);
 
        if(choice ==1){
            insertAtFront();
            }
        else if(choice ==2){
            insertAtEnd();
            }
        else if(choice ==3){
            insertAtPosition();
            }
        else if(choice ==4){
            deleteFirst();
      }
      	else if(choice ==5){
            deleteEnd();
     }
     	else if(choice ==6){
            deletePosition();
        }
    }while(choice!=7);
    return 0;
}




