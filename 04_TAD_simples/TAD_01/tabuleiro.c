#include <stdio.h>
#include "tabuleiro.h"

tTabuleiro CriaTabuleiro(){
    tTabuleiro tab;
    tab.pecaVazio='-';
    for(int i=0;i<TAM_TABULEIRO;i++){
        for(int j=0;j<TAM_TABULEIRO;j++){
            tab.posicoes[i][j]=tab.pecaVazio;
        }
    }
    return tab;
}

tTabuleiro MarcaPosicaoTabuleiro(tTabuleiro tabuleiro, int peca, int x, int y){
    if(peca==1){
        tabuleiro.posicoes[x][y]=tabuleiro.peca1;
    }else if(peca==2){
        tabuleiro.posicoes[x][y]=tabuleiro.peca2;
    }
    return tabuleiro;
}

int TemPosicaoLivreTabuleiro(tTabuleiro tabuleiro){
    for(int i=0;i<TAM_TABULEIRO;i++){
        for(int j=0;j<TAM_TABULEIRO;j++){
            if(tabuleiro.posicoes[i][j]!=tabuleiro.pecaVazio){
                return 0;
            }
        }
    }
    return 1;
}

int EstaMarcadaPosicaoPecaTabuleiro(tTabuleiro tabuleiro, int x, int y, int peca){
    if(peca==1){
        if(tabuleiro.posicoes[x][y]==tabuleiro.peca1){
            return 1;
        }
    }
    if(peca==2){
        if(tabuleiro.posicoes[x][y]==tabuleiro.peca2){
            return 1;
        }
    }
    return 0;
}

int EstaLivrePosicaoTabuleiro(tTabuleiro tabuleiro, int x, int y){
    if(tabuleiro.posicoes[x][y]==tabuleiro.pecaVazio){
        return 1;
    }else{
        return 0;
    }
}

int EhPosicaoValidaTabuleiro(int x, int y){
    if(x>=0&&x<TAM_TABULEIRO){
        if(y>=0&&y<TAM_TABULEIRO){
            return 1;
        }
    }
    return 0;
}

void ImprimeTabuleiro(tTabuleiro tabuleiro){
    for(int i=0;i<TAM_TABULEIRO;i++){
        for(int j=0;j<TAM_TABULEIRO;j++){
            printf("%c", tabuleiro.posicoes[i][j]);
        }
        printf("\n");
    }
}
