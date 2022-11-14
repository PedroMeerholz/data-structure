#include "arquivos-cabecalho/statistics.h"
#include <math.h>

float calcular_media(int valores[LENGTH]) {
    float soma = 0;
    int i = 0;
    for(i; i < LENGTH; i++) {
        soma+=valores[i];
    }
    float media = soma / LENGTH;
    return media;
}
float calcular_desvio_padrao(int valores[LENGTH]) {
    float media = calcular_media(valores);
    int i = 0;
    float somatorio = 0;
    for(i; i < LENGTH; i++) {
        float valor = valores[i] - media;
        valor = pow(valor, 2);
        somatorio += valor;
    }
    float variancia = somatorio / LENGTH;
    return sqrt(variancia);
}