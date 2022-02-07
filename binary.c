#include <stdio.h>
int main(){
	int arr[100];
	int first,last,middle,n,search;
	int i,count,s;
	printf("Enter the size of the array : ");
	count++;
	scanf("%d",&n);
	
	count++;
	printf("Enter the elements of the array : ");
	count++;
	for(i=0;i<n;i++,count++){
		scanf("%d",&arr[i]);
		count++;
		}
	printf("The array is : ");
	count++;
	count++;
	for(i=0;i<n;i++,count++){
		printf("%d ",arr[i]);
		count++;
		}
	
	printf("\nEnter the element to search :");
	count++;
	scanf("%d",&search);
	count++;
	first=0;
	last = n-1;
	middle=(first + last)/2;
	while (first<=last){
	        count++;
		if(arr[middle]< search){
			count++;
		        first=middle+1;
		        count++;
			}
		else if(arr[middle]==search){
			count++;
			printf("element present");
			break;
			}
		else{
			count++;
			last=middle-1;
			
			}
			count++;
			middle=(first+last)/2;
			}
			
	if(first>last){
		count++;
		printf("Element not present");
		count++;
		}
	count++;
	count++;
	s = sizeof(arr)+sizeof(n)+sizeof(search)+sizeof(first)+sizeof(last)+sizeof(middle)+sizeof(i);
	printf("\nspace complexity : %d",s);
	printf("\ntime complexity : %d",count);
	return 0;
	}
	
