#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main() {
    setlocale(LC_ALL, "");
    int n;
    int i;
    int soma = 0;
    int maior = INT_MIN;
    int menor = INT_MAX;

    for (i = 0; i <= 5; i++) {
        printf("Digite um n�mero: ");
        scanf("%d", &n);
        soma += n;

        if (n > maior) {
            maior = n;
        }

        if (n < menor) {
            menor = n;
        }
    }

    printf("A soma � %d\n", soma);
    printf("Maior n�mero �: %d\n", maior);
    printf("Menor n�mero �: %d\n", menor);

    return 0;
}
