//Construa uma biblioteca para calcular a média e o desvio padrão de uma série de números inteiros.
//Com a biblioteca crie uma aplicação que pegue um vetor com 5 valores, insira na série e calcule a média e o desvio
// padrão, imprimindo seus valores lado a lado com duas casas decimais. Valores: 2, 5, 7, 13, 18, 21.
#include <stdio.h>
#include "arquivos-cabecalho/statistics.h"

int main() {
    int valores[LENGTH] = {2, 5, 7, 13, 18, 21};
    printf("Média: %f\n", calcular_media(valores));
    printf("Desvio Padrão: %f\n", calcular_desvio_padrao(valores));
    return 1;
}
