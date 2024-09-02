#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int i, idade, maior = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        if (idade > 18) {
            maior++;
        }
    }

    printf("Maior de 18: %d\n", maior);

    return 0;
}
