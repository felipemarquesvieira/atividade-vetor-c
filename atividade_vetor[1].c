#include <stdio.h>

#define TAMANHO 20

int main(void) {
    int vetor[TAMANHO];
    int i;
    int somaMultiplos3 = 0;
    int somaPares = 0;
    int quantidadePares = 0;
    int positivos = 0;
    int negativos = 0;
    int maior, menor;
    double mediaPares;

    printf("=============================================\n");
    printf("       ANALISE DE 20 NUMEROS INTEIROS\n");
    printf("=============================================\n\n");

    // Leitura dos 20 numeros e armazenamento no vetor
    for (i = 0; i < TAMANHO; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Inicializacao do maior e menor valor
    maior = vetor[0];
    menor = vetor[0];

    // Percorre o vetor para realizar os calculos
    for (i = 0; i < TAMANHO; i++) {

        // Soma dos elementos multiplos de 3
        if (vetor[i] % 3 == 0) {
            somaMultiplos3 += vetor[i];
        }

        // Soma e quantidade dos elementos pares
        if (vetor[i] % 2 == 0) {
            somaPares += vetor[i];
            quantidadePares++;
        }

        // Contagem de positivos e negativos
        // O zero nao entra em nenhuma das duas contagens
        if (vetor[i] > 0) {
            positivos++;
        } else if (vetor[i] < 0) {
            negativos++;
        }

        // Verificacao do maior valor
        if (vetor[i] > maior) {
            maior = vetor[i];
        }

        // Verificacao do menor valor
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    // Evita divisao por zero caso nao existam numeros pares
    if (quantidadePares > 0) {
        mediaPares = (double)somaPares / quantidadePares;
    } else {
        mediaPares = 0.0;
    }

    // Exibicao dos resultados
    printf("\n=============================================\n");
    printf("                 RESULTADOS\n");
    printf("=============================================\n");

    printf("Soma dos multiplos de 3: %d\n", somaMultiplos3);

    if (quantidadePares > 0) {
        printf("Media dos numeros pares: %.2f\n", mediaPares);
    } else {
        printf("Media dos numeros pares: Nao existem numeros pares.\n");
    }

    printf("Quantidade de numeros positivos: %d\n", positivos);
    printf("Quantidade de numeros negativos: %d\n", negativos);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    // Exibicao de todos os elementos armazenados
    printf("\nElementos armazenados no vetor:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("[%d] = %d\n", i, vetor[i]);
    }

    printf("\n=============================================\n");
    printf("Programa finalizado com sucesso!\n");
    printf("=============================================\n");

    return 0;
}
