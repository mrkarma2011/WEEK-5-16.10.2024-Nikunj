#include<stdio.h>

int main(){
    int n,k,c=0,i,j;
    printf("enter n:");
    scanf("%d",&n);
    
    if(n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int a[n];


    // Input
    for (i = 0; i < n; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("enter k:");
    scanf("%d", &k);

    // Sorting
    for (i = 0; i < n; i++)
		{if(a[i]==k)
			c++;		
            }

printf("%d appears %d times", k,c);

    return 0;
}
