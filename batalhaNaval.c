#include <stdint.h>
void posicionarNavios(int tabuleiro[10][10]){
// Declaração do vetores que representam os dois navios
int navioUm[3] = {3, 3, 3};
int navioDois[3] = {3, 3, 3};

 // Posicionamento inicial dos navios
int linhaNavio1 = 8, colunaNavio1 = 7;
int linhaNavio2 = 2, colunaNavio2 = 2;
}

int main() {
    // Declaração da matriz 10x10 que irá representar o tabuleiro
    int tabuleiro[10][10];

    // Declaração das matrizes de habilidades já preenchidas com 0
    int matrizCone[3][5] = {0};
    int matrizCruz[3][5] = {0};
    int matrizOctaedro[3][5] = {0};

    // Declaração do vetor que será utilizado como referêcia de coluna no tabuleiro
    char letras[11] = {' ','A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    // Declaração do vetor que será utilizado como referêcia de linha no tabuleiro
    int linhas[10] =  {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    // Implementando a matriz com números zeros para representar a água.
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0; 
        }
    }
}
