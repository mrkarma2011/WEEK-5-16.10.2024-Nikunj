#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int a[n], b[n];
    int bCount = 0;

    
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    
    for (i = 0; i < n; i++) {
        int isDistinct = 1;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) {
            printf("%d ", a[i]);
        }
    }

    

    return 0;
}
