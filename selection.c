#include <stdio.h>
int main() {
   int arr[100];
	int size,i,j,temp,position;
	int count ,s;
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
	printf("The array is :" );
	count++;
	for(i=0;i<size;i++,count++){
		printf("%d ",arr[i]);
		count++;
		}
       for (i = 0; i < (size - 1); i++,count++) {
                position = i;
      		for (j = i + 1; j < size; j++,count++) {
         		if (arr[position] > arr[j]){
         			count++;
            			position = j;
       			} 
       			count++;
       			}
      		if (position != i) {
      			count++;
         		temp = arr[i];
         		arr[i] = arr[position];
         		arr[position] = temp;
         		count+=3;
      }
      count++;
   }
       printf("\nThe sorted array is : ");
       count++;
       for (i = 0; i < size; i++,count++){
      		printf("%d ", arr[i]);
      		count++;
      		}
      	count++;
      	s = sizeof(arr)+sizeof(size)+sizeof(i)+sizeof(j)+sizeof(temp)+sizeof(temp);
      	printf("\nSpace complexity : %d",s);
      	printf("\ntime complexity : %d",count);
   	return 0;
}
