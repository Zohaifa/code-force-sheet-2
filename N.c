#include <stdio.h>

int main(){
    int N, n, i, j;
    char s;
    scanf("%c %d", &s, &N);
    for(i = 0; i<N; i++){
        scanf("%d", &n);
        for(j=0; j<n; j++){
            printf("%c", s);
        }
        printf("\n");
    }
    return 0;
}
