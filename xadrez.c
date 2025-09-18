#include <stdio.h>
// Desafio de Xadrez - MateCheck
//ANDRE SILVA DOS SANTOS

//Constantes para o numero de casas!
    const int casasBispo = 5;
    const int casasTorre = 5;
    const int casasRainha = 8;

    //Recursivas:

    //TORRE - apenas movimento para frente.
    void moverTorre(int passo, int limite){
        if (passo > limite) return; //Condição de parada.
        printf("Passo %d: Frente\n", passo);
        moverTorre(passo + 1, limite); //Chamada recursiva
    }

    // Bispo – movimento na diagonal (cima + direita)
    void moverBispo(int passo, int limite) {
    if (passo > limite) return; // condição de parada
    printf("Passo %d: Cima e Direita\n", passo);
    moverBispo(passo + 1, limite); // chamada recursiva
}

    // Rainha – movimento somente para esquerda
    void moverRainha(int passo, int limite) {
    if (passo > limite) return; // condição de parada
    printf("Passo %d: Esquerda\n", passo);
    moverRainha(passo + 1, limite); // chamada recursiva
}

//                 LOOPS COMPLEXOS  

    // Cavalo – movimento em L (2 casas para cima, 1 para direita)
    void moverCavalo() {
        printf("CAVALO:\n");
        for (int i = 1; i <= 2; i++) {  // duas casas para cima
        if (i == 2) {
            printf("Passo %d: Cima\n", i);
            continue; // vai para a próxima iteração após imprimir
        }
        printf("Passo %d: Cima\n", i);
    }

    for (int j = 1; j <= 1; j++) {  // uma casa para direita
        if (j > 1) break; // só para mostrar uso de break
        printf("Passo 3: Direita\n");
    }
    printf("\n");
}

    // Bispo também com loops aninhados (extra exigido)
    void moverBispoLoops(int limite) {
        printf("BISPO (loops aninhados):\n");
        for (int vertical = 1; vertical <= limite; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Passo %d: Cima e Direita\n", vertical);
        }
    }
    printf("\n");
}

    int main() {

    // Torre com recursividade
    printf("TORRE:\n");
    moverTorre(1, casasTorre);
    printf("\n");

    // Bispo com recursividade
    printf("BISPO (recursividade):\n");
    moverBispo(1, casasBispo);
    printf("\n");

    // Rainha com recursividade
    printf("RAINHA:\n");
    moverRainha(1, casasRainha);
    printf("\n");

    // Cavalo com loops complexos
    moverCavalo();

    // Bispo com loops aninhados
    moverBispoLoops(casasBispo);

    return 0;
}

   
    

  
