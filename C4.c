#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int N, i;
    int valor, maior, menor;
    int soma = 0;

    printf("Digite o número de valores inteiros a serem lidos: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("O número de valores deve ser maior que 0.\n");
        return 1;
    }

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    maior = menor = valor;
    soma = valor;

    i = 1;
    do {
        printf("Digite um valor inteiro: ");
        scanf("%d", &valor);

        soma += valor;

        if (valor > maior) {
            maior = valor;
        }
        if (valor < menor) {
            menor = valor;
        }

        i++;
    } while (i < N);

    double media = (double)soma / N;

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2f\n", media);

return 0;
}
