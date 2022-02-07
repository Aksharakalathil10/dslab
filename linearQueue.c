#include <stdio.h>
#include <stdlib.h>
#define MAX 50
void insert();
void delete();
void display();
int queue[MAX];
int rear = -1;
int front = -1;
int main(){
	int choice;
	do{
	printf("Enter the choice:\n");
	printf("1.Insert element to queue .\n");
	printf("2.delete an element to queue.\n");
	printf("3.Exit\n");
	scanf("%d",&choice);
	if(choice == 1){
		insert();
	}
	else if(choice == 2){
		delete();
		}
	while(choice!=3);
	return 0;
	}
void insert(){
	int add;
	if(rear==MAX-1){ // to check whther queue is full
	
		printf("Queue overflow\n");
	}
	else {
		if(front == -1){ //queue is empty at first
		front =0;
		printf("Enter the element to insert to the queue : ");
		scanf("%d",&add);
		rear = rear +1;
		queue[rear]=add;
		display();
		}
		else{
			printf("Enter the element to insert to the queue : ");
			scanf("%d",&add);
			rear = rear +1;
			queue[rear]=add;
			display();
		}
	}}
void delete(){
	if(front == -1||front>rear){
		printf("Queue underflow \n");
	}
	else{
		printf("Element deleted from queue is %d\n",queue[front]);
		front = front+1;
		display();
		}}
void display(){
	int i;
	if(front == -1){
		printf("queue is empty \n");
		}
	else{
		printf("queue is : ");
		for(i=front;i<=rear;i++){
			printf("%d ",queue[i]);

		}
		printf("\n");
		}
		}
			
		
	
	
