#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int i, filhos;
    int totalSalario = 0, totalFilhos = 0;
    int salario;
    int maiorSalario = 0;
    int pessoasSalarioAte150 = 0;
    int numPessoas = 5;

    for (i = 1; i <= numPessoas; i++) {
        printf("Digite o salário da %dª pessoa: ", i);
        scanf("%d", &salario);
        printf("Digite a quantidade de filhos da %dª pessoa: ", i);
        scanf("%d", &filhos);

        totalSalario += salario;
        totalFilhos += filhos;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 150) {
            pessoasSalarioAte150++;
        }
    }

    printf("A média dos salários é: %.2f\n", (float)totalSalario / numPessoas);
    printf("A média de filhos é: %.2f\n", (float)totalFilhos / numPessoas);
    printf("O maior salário é: %d\n", maiorSalario);

    float porcentagemAte150 = ((float)pessoasSalarioAte150 / numPessoas) * 100;
    printf("Porcentagem de pessoas com salário até 150 reais: %.2f%%\n", porcentagemAte150);

    return 0;
}
