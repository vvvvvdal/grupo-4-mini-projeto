#include<stdio.h>
void q22_menor_que();

void q22_menor_que(){
    int a, b, res;

    scanf ("%d < %d",&a,&b);

    if(a<b){res=1;// 1 SIM,verdadeiro

    }else if(a>=b){ res=0;// 0 NÃO,falso

    }

    printf("%s\n",(res==1?"SIM":"NAO"));
}