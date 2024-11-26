#include<stdio.h>

int main(){
    int n,k;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter k:");
    scanf("%d", &k);
    if(n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int a[n];


    // Input
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Sorting
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j<n-1-i; j++) 
            if(a[j]> a[j+1])
            {
                int t= a[j];
                a[j]= a[j+1];
                a[j+1]=t;
            }

printf("%d largest = %d\n", k, a[n-k]);
printf("%d smallest = %d", k, a[k-1]);

    return 0;
}