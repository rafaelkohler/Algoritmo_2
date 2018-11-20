#include <iostream>

int soma (int x) {
    if(x == 1){ //aqui esta a recursividade;
        return 1;
    } else
        return x + soma(x-1);
}

int fat(int x){
    if(x == 0) { //aqui esta a recursividade;
        return 1;
    }else
        return x * fat(x-1);
}

int main() {
    int x, resultSoma, resultFat;
    
    printf("Digite um valor: ");
    scanf("%i", &x);
    resultSoma = soma(x);
    resultFat = fat(x);
    
    printf("\nO resultado da soma eh: %i\n\n", resultSoma);
    printf("O resultado do fatorial eh: %i\n\n", resultFat);

    
    
    
    
    /*int n, i, soma;
    printf("Digite um valor: ");
    scanf("%d", &n);
    soma = 0;
    i = 0;
    while (i < n) {
        i = i + 1;
        soma = soma + i;
    }
    printf("%d\n\n", soma);
    */
}
