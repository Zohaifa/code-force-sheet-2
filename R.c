#include <stdio.h>

int main(){
    int a, b, low, high, i;
    while(1){
        scanf("%d %d", &a, &b);
        if(a<=0 || b<=0)
            break;
        else if (a>b){
            low = b;
            high = a;
        }
        else{
            low = a;
            high = b;
        }
        int sum = 0;
        for(i=low; i<=high; i++){
            printf("%d ", i);
            sum = sum +i;
        }
        printf("sum =%d\n", sum);
    }

    return 0;
}
