#include <stdio.h>

int main(){
    int i, n, m, max = 0;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d",&m);
        if(max<m){
            max = m;
        }
    }
    printf("%d", max);

    return 0;
}
