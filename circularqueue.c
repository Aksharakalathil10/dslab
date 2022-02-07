#include <stdio.h>
#define MAX 6
int queue[MAX];
int front = -1;
int rear = -1;
void display(){
	int i = front ;
	if(front == -1 && rear == -1){
		printf("Queue is empty\n1");
		}
	else{
		printf("\n The queue is :");
		while (i!=rear){
			printf("%d " ,queue[i]);
			i = (i+1)%MAX;
			}
			printf("%d",queue[rear]);
			printf("\n");
			}}
void enqueue(int element){
	if(front == -1 && rear == -1){
		front =0;
		rear =0;
		queue[rear] = element;
		display();
		}
	else if (((rear+1)%MAX) == front ){
		printf("Queue is overflow \n");
		}
	else{
		rear =(rear+1)%MAX;
		queue[rear]=element;
		display();
		}}
int dequeue(){
	if((front == -1)&&(rear==-1)){
		 printf("Queue is underflow \n");
		 }
        else if(front == rear){
		printf("The deleted element is %d \n" ,queue[front]);
		front = -1;
		rear = -1;
		display();
		}
	else{
		printf("The deleted element is %d \n" ,queue[front]);
		front = (front +1)%MAX;
		display();
		}}

int main(){
	int choice,x;
	do{
	printf("Enter the choice:\n");
	printf("1.Insert element to circular queue .\n");
	printf("2.delete an element to circular queue.\n");
	printf("3.Exit\n");
	scanf("%d",&choice);
	if(choice == 1){
		printf("enter the element to be inserted :");
		scanf("%d",&x);
		enqueue(x);
	}
	else if(choice == 2){
		dequeue();
		}
	}
	while(choice!=3);
	return 0;
	} 	
		
