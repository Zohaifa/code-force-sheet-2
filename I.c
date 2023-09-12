#include <stdio.h>

int main(){
    int n1, n2 = 0, i, j, k;
    scanf("%d", &n1);
    k = n1;
    while(k>0){
        j = k%10;
        k = k/10;
        n2 = n2*10 + j;
    }
    printf("%d\n", n2);
    if(n1 == n2)
        printf("YES");
    else
        printf("NO");
    return 0;
}
