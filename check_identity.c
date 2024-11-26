#include<stdio.h>
int main(){
    int n; 
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
    int a[n][n], b[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            printf("enter element  a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
    
   int isIdentity =1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++){
        if(i==j){
            if(a[i][j]!=1){
            isIdentity=0;
            break;
            }
        }
        else{
            if (a[i][j]!=0)
            {
                isIdentity=0;
                break;
            }
        }
        }
        if(isIdentity)
        printf("Matrix is identity");
        else
        printf("Matrix is not identity");
        
            
        
        

    

}