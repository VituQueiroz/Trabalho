#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int n, i;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &n);

    int primo = 1;

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo) {
        printf("%d é um número primo.\n", n);
    } else {
        printf("%d não é um número primo.\n", n);
    }

    return 0;
}
