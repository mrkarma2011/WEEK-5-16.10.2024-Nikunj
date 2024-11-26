#include<stdio.h>
int main(){
    int n; 
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
    int a[n][n], b[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            printf("enter element  a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
    
   int s=0;
   for (int i = 0; i < n; i++)
    s +=  a[i][i];
   
    
printf("sum of left diagonals is: %d", s);
}