    #include <stdio.h>
    #include <math.h>

int main(){
    int i, j, t;
    unsigned long long int dn, dn2;
    scanf("%d", &t);
    for(int k = 0; k<t; k++){
        scanf("%llu", &dn);
        i=0, dn2=0;
        while(dn != 0){
            if(dn%2 == 1){
                dn2 = dn2 + pow(2,i);
                i++;
            }
            dn=dn/2;
        }
        printf("%llu\n", dn2);
    }

    return 0;
}
