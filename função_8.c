#include<stdio.h>
void q8_and_bit_a_bit();

void q8_and_bit_a_bit(){
    int a, b, res=0;

    scanf("%d & %d",&a,&b);

    res = a & b;

    printf("%d\n",res);
}
