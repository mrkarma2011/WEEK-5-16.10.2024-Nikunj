#include<stdio.h>
int main(){
	int n; 
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	int i,j;
	int a[n][n], b[n][n];
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	printf("%d ", a[i][j]+ b[i][j]);
	}
	printf("\n");
}
}
