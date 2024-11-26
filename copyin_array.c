#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter n: "); 
    scanf("%d", &n); 
    int a[n],b[n]; 
    
    // input
    for(i=0; i<n; i++)
    { printf("enter element %d : ", i+1); 
      scanf("%d", &a[i]);
    }
    for(j=0; j<n;j++){
    	b[j]= a[j];
    	printf("copied array: %d ", b[j]);
	}
    
   
    return 0;
}
