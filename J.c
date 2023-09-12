#include <stdio.h>

int main(){
    int n, i, j;
    scanf("%d", &n);
    for(j=1; j<=n; j++){
        int count =0;
        for(i=1; i<=j; i++){
            if(j%i == 0){
                count++;
            }
        }
        if(count == 2){
            printf("%d ", j);
        }
    }
}
