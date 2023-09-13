#include <stdio.h>

int main(){
    int N, n, i, j;
    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d", &n);
        if (n == 0){
            printf("0\n");
        }
        else{
            j = n;
            while(j>0){
                printf("%d ", j%10);
                j = j/10;
            }
            printf("\n");
        }
    }

    return 0;
}
