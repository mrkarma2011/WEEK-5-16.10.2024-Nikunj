#include<stdio.h>

int main(){
    int n,i,j,k,l;
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
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	for(l=0; l<n; l++)
		if(a[i]+a[j]+a[l]==k && i!=j && j!=k)
   			goto exit;
		   
	   


    exit: printf("(%d,%d,%d)\n", a[i], a[j],a[l]);
    return 0;
}
