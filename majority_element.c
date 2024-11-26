#include<stdio.h>
int main(){
    int n,i,j,c=0,x=0;
    printf("enter n: "); 
    scanf("%d", &n); 
    int a[n],b[n],d[n],k[n]; 
    
    // input
    for(i=0; i<n; i++)
    { printf("enter element %d : ", i+1); 
      scanf("%d", &a[i]);
    }
    
    // counting
    for(i=0; i<n; i++)
    {
        c = 0;
        for(j=0; j<n; j++)
        {
            if(a[i] == a[j])
                c++;
        }
        b[i] = c;
    }
    
    //maximum count
    x = b[0];
    for(i=1; i<n; i++)
    {
        if(b[i] > x)
            x = b[i];
    }
    if(x>=(n/2)){
	
    // max count > n/2
    for(i=0; i<n; i++)
    {
        if(b[i] == x)
        {
            printf("%d is majority\n", a[i]);
            return 0;
        }
    }}
    else
    printf("No majority\n");
    return 0;
}
