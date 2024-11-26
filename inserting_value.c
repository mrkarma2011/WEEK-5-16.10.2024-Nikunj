#include<stdio.h>
int main(){
	int n,i,j;
	printf("enter n: "); scanf("%d", &n);
	int existing[5]={2,5,7,9,11};
	int a[6];
	for(i=0; i<5; i++){
		a[i]=existing[i];		
	}
	a[5]=n;
	
for (i = 0; i < 5; i++)
        for ( j = 0; j<5-i; j++) 
            if(a[j]> a[j+1])
            {
                int t= a[j];
                a[j]= a[j+1];
                a[j+1]=t;
            }

for (i = 0; i < 6; i++)
{
    printf("%d ", a[i]);
}

    return 0;
}
