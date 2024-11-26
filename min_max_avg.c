#include<stdio.h>

int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);

    if(n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int a[n];
    int s = 0; // Initialize s to 0

    // Input
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &a[i]);
        s += a[i]; // Calculate the sum in the same loop
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

    printf("max is %d\n", a[n-1]);
    printf("min is %d\n", a[0]);
    printf("avg is %f\n", (float)(s)/n);
    return 0;
}