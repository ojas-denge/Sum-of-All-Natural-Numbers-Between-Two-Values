//Sum of all Numbers Between Two Values
#include<stdio.h>
int main () {
    int n1, n2, i, sum=0;
    
    printf("Input a value to find initialte with : \n");
    scanf("%d", &n1);
    
    printf("Input a value to find conclude with : \n");
    scanf("%d", &n2);
    
    for (i=n1; i<=n2; i++) {
        sum= i + sum;
    }
        printf("The sum of all natural numbers between %d and %d is %d. \n",n1, n2, sum);
        
    return 0;
}