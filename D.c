#include <stdio.h>

int main(){
    int i, x;
    for(i = 0; ; i++){
        scanf("%d",&x);
        if(x ==1999){
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }

    return 0;
}
