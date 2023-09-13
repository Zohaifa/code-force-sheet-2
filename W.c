#include <stdio.h>

int main(){
    int n, i, j, k = 1;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        for(j=1; j<=k; j++){
            printf("*");
        }
        k+=2;
        printf("\n");
    }
    k=k-2;
    for(i=1; i<=n; i++){
        for(j=1; j<=i-1; j++){
            printf(" ");
        }
        for(j=1; j<=k; j++){
            printf("*");
        }
        k-=2;
        printf("\n");
    }
    return 0;
}
