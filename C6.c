#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int i;
    printf("Números impares: \n");
    for (i = 100; i <=300; i++) {
        if (i % 2 != 0) {
            printf("%d \n", i);
        }

    }

    return 0;
}
