#include <stdio.h>

int main(){
    int x, y;
    scanf("%d", &x);
    for(y = 1; y<=12; y++){
        printf("%d * %d = %d\n", x, y, x*y);
    }
    return 0;
}
