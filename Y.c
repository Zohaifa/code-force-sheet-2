    #include <stdio.h>


int main(){
    int a=0, b=1, c, sum, n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i==1){
            printf("%d ", a);
        }
        else if(i==2){
            printf("%d ", b);
        }
        else{
            c = a+b;
            a=b;
            b=c;
            printf("%d ", c);
        }
    }


    return 0;
}
