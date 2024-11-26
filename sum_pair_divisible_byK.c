#include <stdio.h>

int main() {
    int n, k;
    
    
    do {
        printf("Enter the number of elements (even) in the array: ");
        scanf("%d", &n);
    } while (n % 2 != 0);
    
    int a[n];
    
    
    printf("Input array: \n");
    for (int j = 0; j < n; j++) {
        printf("Enter element a[%d]: ", j);
        scanf("%d", &a[j]);
    }
    
    
    printf("Number to check divisibility: ");
    scanf("%d", &k);
    

    int remCount[k];
    for (int i = 0; i < k; i++) {
        remCount[i] = 0;
    }
    
    // Count times each remainder comes
    for (int i = 0; i < n; i++) {
        int remainder = a[i] % k;
        remCount[remainder]++;
    }
    
    // Check pairs
    for (int i = 1; i <= k / 2 && i < k; i++) {
        if (remCount[i] != remCount[k - i]) {
            printf("False\n");
            return 0;
        }
    }
    
    //case 2 when remainder is 0
    if (remCount[0] % 2 != 0) {
        printf("False\n");
        return 0;
    }
    
    //case 3 when remander is k/2
    if (k % 2 == 0) {
        if (remCount[k / 2] % 2 != 0) {
            printf("False\n");
            return 0;
        }
    }
    
    printf("True\n");
    return 0;
}