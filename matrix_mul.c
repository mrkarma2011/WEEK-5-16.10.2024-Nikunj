#include<stdio.h>
int main(){
    // matrix multiplication of 3x3
    int n; 
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
    int  A[n][n],  B[n][n];
    int  C[n][n];
    
    //input
    for (int i = 0; i < n; i++)
    for (int j = 0; j<n; j++)
    {
       printf("enter  element A[%d][%d]: ",i,j);

        scanf("%d",&A[i][j]);
    }
    
     for (int i = 0; i < n; i++)
    for (int j = 0; j<n; j++)
    {   printf("enter  element B[%d][%d]: ", i,j);
        scanf("%d",&B[i][j]);
    }
    
    //multiplication
    for (int i = 0; i < n; i++)
        for(int j=0; j<n; j++)
            {C[i][j]=0;
                for(int k=0;k<n;k++)
            C[i][j] += A[i][k] * B[k][j];}
    
for (int i = 0; i < n; i++)
    {for(int j=0; j<n ; j++)
    printf("%d ", C[i][j]);
    printf("\n");
    }

}