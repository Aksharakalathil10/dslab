#include <stdio.h>
struct poly{
	int coeffecient;
	int exponent;
};
struct poly a[10];
int main(){
	int degree;
	int i,k=0;
	printf("Enter the highest degree of the first polynomial : \n");
	scanf("%d",&degree);
	for(i=0;i<=degree;i++){
		printf("Enter the %dth coeffecients : ",i);
		scanf("%d",&a[i].coeffecient);
		a[k++].exponent=i;
	}
	printf("The polynomial representation is : ");
	for(i=degree;i>0;i--){
		if(a[i].coeffecient != 0){
			printf("%dx^%d+",a[i].coeffecient,a[i].exponent);
		}}
	if(a[0].coeffecient !=0){
		printf("%d",a[0].coeffecient);
		}
	printf("\n");
	
	
	
	
	
	return 0;
	}
	
