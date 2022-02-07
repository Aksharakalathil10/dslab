#include <stdio.h>
int main(){
	int arr[100];
	int size,search,flag=0;
	int i,count,s;
	printf("Enter the size of the array : ");
	count++;
	scanf("%d",&size);
	count++;
	printf("Enter the elements of the array : ");
	count++;
	for(i=0;i<size;i++,count++){
		scanf("%d",&arr[i]);
		count++;
		}
	printf("The array is : ");
	count++;
	for(i=0;i<size;i++,count++){
		printf("%d ",arr[i]);
		count++;
		}
	printf("\nEnter the element to search : ");
	count++;
	scanf("%d",&search);
	count++;
	for(i=0;i<size;i++,count++){
		if(search == arr[i]){
			count++;
			flag = 1;
			}
			count++;
			}
	if(flag == 0){
		count++;
		printf("The element %d is not in the array",search);
		count++;
		}
	else{
		count++;
		printf("The element %d is in the array",search);
		count++;
        }
        count++;
	count++;
	s = sizeof(arr)+sizeof(size)+sizeof(search)+sizeof(flag)+sizeof(i);
	printf("\ntime complexity : %d",count); 
	printf("\nspace complexity : %d",s); 
	return 0;
	}
	
