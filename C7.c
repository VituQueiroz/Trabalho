#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int n, i;

    printf("Digite um n�mero inteiro e positivo: ");
    scanf("%d", &n);

    int primo = 1;

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo) {
        printf("%d � um n�mero primo.\n", n);
    } else {
        printf("%d n�o � um n�mero primo.\n", n);
    }

    return 0;
}
