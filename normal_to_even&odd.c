#include<stdio.h>

int main(){
    int n,i,j;
    printf("enter n:");
    scanf("%d",&n);

    if(n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int a[n],evencount=0, even[n], oddcount=0,odd[n];


    // Input
    for (i = 0; i < n; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    
    for(i=0; i<n; i++)
    {
		if(a[i] % 2==0)
    	even[evencount++]= a[i];
    	else if (a[i]% 2 !=0)
    	odd[oddcount++]= a[i];
    }
    
    
    printf("EVEN ARRAY: ");
	for(i=0; i<evencount; i++)
	printf("%d ", even[i]);
	printf("\n");
	printf("ODD ARRAY: ");
	for(i=0; i<oddcount; i++)
	printf("%d ", odd[i]);
		
		
		
		
		
		
		
		
		return 0;
}
