#include<stdio.h>

int main()
{
    int n1,n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Even Numbers => ");
    for(int i=n1; i<=n2; i++){
        if(i%2==0)
            printf("%d ", i);
    }
    printf("\nOdd Numbers => ");
    for(int j=n1; j<=n2; j++){
        if(j%2!=0)
            printf("%d ", j);
    }
    printf("\n");
    
    return 0;
}