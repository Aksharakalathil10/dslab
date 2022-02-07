#include <stdio.h>
int main(){
	int row,col,i,j,k=0;
	int b[30][3];
	printf("Enter the row and column : ");
	scanf("%d %d",&row,&col);
	int a[row][col];
	printf("Enter the elements");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
			}
			}
	b[0][0] = row;
	b[0][1] = col;
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(a[i][j] != 0){
				k++;
				b[k][0] = i;
				b[k][1] = j;
				b[k][2] = a[i][j];
				}
			}
		}
	b[0][2] = k;
	
	printf("the given matrix is : \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d \t",a[i][j]);
			}
			printf("\n");
		}
	printf("Sparse matrix for the given matrix is : \nRow\tColumn\tNon zero\n");
	for(i=0;i<=k;i++){
		printf("%d\t%d\t%d\n",b[i][0],b[i][1],b[i][2]);
	}
	
	
	return 0;
	}
