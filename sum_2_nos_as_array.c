#include<stdio.h>
int main(){
    int n; 
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
    int a[n],b[n];
    printf("Input 1st array:\n");
        for (int j = 0; j < n; j++)
        {
            printf("enter element  a[%d]: ",j);
            scanf("%d", &a[j]);
        }
    printf("Input  2nd array:\n");

        for (int j = 0; j < n; j++)
        {
            printf("enter element  b[%d]: ",j);
            scanf("%d", &b[j]);
        }
   
   int c[n];
   for (int i = 0; i < n; i++)
   {
    c[i]=a[i]+b[i];
   }
   printf("The sum of the two arrays is: ");
   for (int i = 0; i < n; i++)
   {
    printf("%d", c[i]);
   }

}