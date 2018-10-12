#include <iostream>
#include <stdio.h>

void helloWorld(){
    printf("\nHello World!\n");
}

int somar2valores(int x, int y){
    int c;
    c = x + y;
    return c;
    
}

int lerNumeroInteiro(){
    printf("\nFavor digitar um numero inteiro: ");
    int numero;
    scanf("%i", &numero);
    return numero;
}

int main(){
    helloWorld();
    
    int a = somar2valores(3, 39);
    printf("O resultado da soma: %i\n", a);
    
    int b = 10;
    int c = 15;
    int d = somar2valores(b, c);
    printf("Resultado da soma: %i\n", d);
    
    int primeiroValor = lerNumeroInteiro();
    int segundoValor = lerNumeroInteiro();
    int e = somar2valores(primeiroValor, segundoValor);
    printf("Resultado da soma: %i\n", e);
    
    return 0;
}
