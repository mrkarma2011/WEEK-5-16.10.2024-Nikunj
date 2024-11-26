#include<stdio.h>
int main(){
    int n; 
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
    int a[n];
    float b[n];

        for (int j = 0; j < n; j++)
        {
            printf("enter element  a[%d]: ",j);
            scanf("%d", &a[j]);
        }
for(int i=0;i<n;i++)
    b[i]=0;

    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<i+1;j++)
        b[i] += (float)(a[j])/(i+1);
    }
    
    printf("Output:  ");
    for(int i=0; i<n; i++)
    printf("%f ", b[i]);
}
