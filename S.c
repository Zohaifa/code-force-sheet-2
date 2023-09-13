#include <stdio.h>

int main(){
    int a, b, high, low, i, j, n;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        if(a>b){
            high = a;
            low = b;
        }
        else{
            high = b;
            low = a;
        }
        int sum =0;
        for(j=low+1; j<high; j++){
            if(j%2 != 0){
                sum = sum + j;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
