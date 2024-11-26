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
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n && i>=j; j++)
        { int t = a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=t;
    }
    
    for (int i = 0; i < n; i++)
    {for (int j = 0; j < n ; j++)
    printf("%d ", a[i][j]);
    printf("\n");
    }

    
}