#include <stdio.h>

int main(){
    int n, i, j=0, k;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(k=0; k<3; k++){
            j++;
            printf("%d ", j);
        }
        j++;
        printf("PUM\n");
    }

    return 0;
}
