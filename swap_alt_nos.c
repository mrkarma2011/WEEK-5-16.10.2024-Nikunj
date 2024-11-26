#include<stdio.h>

int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);

    if(n <= 0 || n%2!=0) {
        printf("Invalid input. Please enter a even positive integer.\n");
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
        for (int j = 0; j<n-1-i; j+=2) 
            {
                int t= a[j];
                a[j]= a[j+1];
                a[j+1]=t;
            }

for (int i = 0; i < n; i++)
{
    printf("%d ", a[i]);
}

    return 0;
}