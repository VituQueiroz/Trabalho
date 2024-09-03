#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int i, filhos, salario;

    for (i = 1; i <= 5; i++) {
        printf("Digite o salário da %d° pessoa: ", i);
        scanf("%d", &salario);
        printf("Digite a quantidade de filhos da %d° pessoa: ", i);
        scanf("%d", &filhos);
        salario++;
        filhos++;
    }
        printf("A média dos salários é: %d\n", salario / 5);
        printf("A média de filhos é: %d\n", filhos / 5);

    return 0;
}