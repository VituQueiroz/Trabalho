#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int n;
    printf("Digite o n�mero da tabuada: ");
    scanf("%d", &n);
    for (int i=1; i<11;i++) {
        printf("%d x %d � igual a %d\n",n,i, i*n);
    }


return 0;
}
