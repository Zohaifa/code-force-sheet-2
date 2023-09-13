#include <stdio.h>

int main(){
    int a, b, i, j =0, k;
    scanf("%d %d", &a, &b);
    for (i = a; i<=b; i++){
        k = i;
        int count = 0;
        while(k>0){
            if(k%10 != 4 && k%10 != 7){
                count++;
            }
            k = k/10;
        }
        if(count == 0){
        printf("%d ", i);
        j++;}
    }
    if(j == 0)
        printf("-1");
    return 0;
}
