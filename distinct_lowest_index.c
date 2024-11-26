#include <stdio.h>

int main() {
    int n, i, j,t;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int a[n];

    
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int found=0;
    for (i = 0; i < n; i++) {
		int isDistinct = 1;
        for (j = 0; j<n; j++) {
            if (i!=j && a[i] == a[j]) {
            	isDistinct=0;
                break;
            } 
        }
        if (isDistinct)
            {
                printf("%d", a[i]);
                found=1;
                break;
            } 
    }
 if(!found)
printf("No distinct elements");
    

    return 0;
}
