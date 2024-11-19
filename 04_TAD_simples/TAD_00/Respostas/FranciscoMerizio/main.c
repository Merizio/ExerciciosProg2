#include <stdio.h>
#include "ponto.h"

int main(){
    float x, y, dist;
    Ponto p[2];

    for(int i=0;i<2;i++){
        scanf("%f %f", &x, &y);
        p[i]=pto_cria(x,y);
    }
    dist=pto_distancia(p[0], p[1]);
    printf("%g", dist);

    return 0;
}