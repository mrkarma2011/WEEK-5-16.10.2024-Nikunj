#include<stdio.h>
int main(){
    int n,x; 
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
    int a[n], b[n];

        for (int j = 0; j < n; j++)
        {
            printf("enter element  a[%d]: ",j);
            scanf("%d", &a[j]);
        }
    
    for (int i = 0; i < n; i++)
        b[i]=0;
    
    
    printf("Enter x: "); scanf("%d", &x);
   
    for (int i = 0; i < n; i++)
    {
        int isThere = 1;
            for(int j=0; j<n ; j++)
            if((a[i]+x)/2 == a[j])
            {
                b[i]++;
            }
    }

        printf("Output:  ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", b[i]);
        }
        

}