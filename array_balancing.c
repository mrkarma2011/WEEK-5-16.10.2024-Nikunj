#include<stdio.h>
#include<stdlib.h>
int main(){
    int n; 
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
    int a[n];
printf("Input an even array: \n");
        for (int j = 0; j < n; j++)
        {
            printf("enter element  a[%d]: ",j);
            scanf("%d", &a[j]);
        }
    
    int s1=0,s2=0;
    for(int i=0; i< n/2  ; i++)
    s1 +=  a[i];

    for(int i=n/2; i<n ; i++ )
    s2 += a[i];

    printf("Output: %d", abs(s2-s1));
}