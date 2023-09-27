#include <stdio.h>

int main(){
    int i, j, a, b, c, d, n, sum =0;
    scanf("%d %d %d", &n, &a, &b);
    for(i=1; i<=n; i++){
            c=i;
            d=0;
        do{
            d = d + c%10;
            c=c/10;
        }while(c!=0);
        if(d>=a && d<=b){
            sum +=i;
        }
    }
    printf("%d\n", sum);

    return 0;
}
