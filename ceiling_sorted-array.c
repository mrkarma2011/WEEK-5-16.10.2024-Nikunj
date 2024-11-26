#include<stdio.h>
int main(){
    int n; 
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
    int k; printf("Number to find ceiling of: "); scanf("%d", &k);
    int a[n];
printf("enter a sorted array(ascending) \n");
    for (int i = 0; i < n; i++)
        {
            printf("enter element  a[%d]: ",i);
            scanf("%d", &a[i]);
        }
    int isCeil=0, ceil;
    for (int i = 0; i < n; i++)
    {
        if (k<=a[i])
        {
            isCeil=1; ceil=a[i];
            break;
        }
        
    }

    printf("Celing of %d in array is %d", k,ceil);

   
    

}