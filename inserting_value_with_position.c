#include<stdio.h>
int main(){
	int n,i,j,k;
	printf("enter n: "); scanf("%d", &n);
	printf("enter postion: "); scanf("%d", &k);
	int existing[4]={1,8,7,10};
	int a[5];
	
	a[k-1]=n;
	for(i=0;i<k-1;i++)
	a[i]= existing[i];
	 
	 for(i=k;i<n;i++)
	 a[i]= existing[i-1];

for (i = 0; i < 5; i++)
{
    printf("%d ", a[i]);
}

    return 0;
}
