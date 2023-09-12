#include <stdio.h>

int main(){
    int i, n, even = 0, odd = 0, positive = 0, negative = 0;
    scanf("%d", &n);
    int num;
    for(i = 0; i < n; i ++){
        scanf("%d",&num);
        if(num%2 == 0){
            even++;
        }
        else{
            odd++;
        }
        if(num>0){
            positive++;
        }
        else if(num<0){
            negative++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);
    return 0;
}
