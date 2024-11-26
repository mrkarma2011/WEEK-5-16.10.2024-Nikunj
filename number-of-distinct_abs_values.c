#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int count=0, a[n];
   printf("Input a sorted array\n");
   for(int i=0; i<n;i++){ 
    printf("enter element a[%d]: ", i);
    scanf("%d", &a[i]);}

    for (int i = 0; i < n; i++)
    { int isDistinct=1;
        for (int j = n; j >i; j--)
        {
            if (abs(a[i])==abs(a[j]))
            {
                isDistinct = 0;
                break;
            }
            
        }
        if(isDistinct){
            count++;
        }
    }

    printf("no. of distinct abs values: %d\n", count);
   

}