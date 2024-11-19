#include <stdio.h>
#include <math.h>
#include "ponto.h"

Ponto pto_cria (float x, float y){
    Ponto p;
    p.x=x;
    p.y=y;
    return p;
}

float pto_acessa_x (Ponto p){
    float x;
    x=p.x;
    return x;
}

float pto_acessa_y (Ponto p){
    float y;
    y=p.y;
    return y;
}

Ponto pto_atribui_x (Ponto p, float x){
    p.x=x;
    return p;
}

Ponto pto_atribui_y (Ponto p, float y){
    p.y=y;
    return p;
}

float pto_distancia (Ponto p1, Ponto p2){
    float dist;
    dist=sqrt(((p1.x-p2.x)*(p1.x-p2.x))+((p1.y-p2.y)*(p1.y-p2.y)));
    return dist;
}