#include<stdio.h>
void q15_produtorio_de_um_intervalo();

void q15_produtorio_de_um_intervalo(){
    int a, b;

    long long int res=1;

    int i;

    scanf("%d P %d",&a,&b);

    for(i=a;i<=b;i++){

        res*=i;

    }

    printf("%lld\n",res);
}