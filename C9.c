#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int i, filhos;
    int totalSalario = 0, totalFilhos = 0;
    int salario;

    for (i = 1; i <= 5; i++) {
        printf("Digite o salário da %dª pessoa: ", i);
        scanf("%d", &salario);
        printf("Digite a quantidade de filhos da %dª pessoa: ", i);
        scanf("%d", &filhos);

        totalSalario += salario;
        totalFilhos += filhos;
    }

    printf("A média dos salários é: %d\n", totalSalario / 5);
    printf("A média de filhos é: %d\n", totalFilhos / 5);

    return 0;
}
