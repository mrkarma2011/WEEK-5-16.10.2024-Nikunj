#include<stdio.h>

int main(){
    int n,i,j,k;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter k: ");
    scanf("%d",&k);

    if(n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int a[n];
    int s = 0; 

    
    for ( i = 0; i < n; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

   for(i=0;i<n;i++){
   	for(j=n-1;j>i;j--){
   		if(a[i]+a[j]==k){
   			printf("(%d,%d)\n", a[i], a[j]);
		   }
	   }
   }

    
    return 0;
}
