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
        for (j = n; j > i; j--) {
            if (a[i] == a[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) {
        	b[bCount++]=a[i];
        	 
        }
       
    }
 	
 	for (i = 0; i < bCount-1; i++)
        for ( j = 0; j<bCount-1-i; j++) 
            if(b[j]> b[j+1])
            {
                int t= b[j];
                b[j]= b[j+1];
                b[j+1]=t;
            }
            printf("%d", b[0]);
    

    return 0;
}
