#include <stdio.h>

int main(){
    int t, n, i, j;
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        scanf("%d", &n);
        if (n == 0){
            printf("1\n");
        }
        else{
            long long int f =1;
            for(j=n; j>0; j--){
            f = f*j;
            }
        printf("%lld\n", f);
        }

    }

    return 0;
}
