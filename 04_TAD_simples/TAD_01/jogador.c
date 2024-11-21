#include <stdio.h>
#include "jogador.h"

tJogador CriaJogador(int idJogador){
    tJogador player;
    player.id=idJogador;

    return player;
}

tTabuleiro JogaJogador(tJogador jogador, tTabuleiro tabuleiro);

int VenceuJogador(tJogador jogador, tTabuleiro tabuleiro);
