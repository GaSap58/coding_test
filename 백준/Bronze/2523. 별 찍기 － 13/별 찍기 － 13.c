#include<stdio.h>
int main(void)
{
    
    int n;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int k = 0; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = 0; i < n-1; i++) {
        for (int j = n-1; j > i; j--) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}