#include <stdio.h>

int main() {
    int n, i, j;
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


    for (i = 1; i <= n; i++) {
        int isPresent = 0;
        for (j = 0; j < n; j++) {
            if (a[j] == i) {
                isPresent = 1;
                break;
            }
        }
        if (!isPresent) {
            printf("%d ", i);
        }
    }
    

    return 0;
}
