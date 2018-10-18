#include <iostream>

int lerNumeroInteiro(){
    int a;
    printf("Favor digitar um numero intiro: ");
    scanf("%i", &a);
    return a;
}
int maiorValorInteiro(int a, int b, int c, int d){
    int maior = a;
    
    if(maior < b) {
        maior = b;
    }
    if (maior < c) {
        maior = c;
    }
    if (maior < d) {
        maior = d;
    }
    return maior;
}

int main(){
    
    int primeiro = lerNumeroInteiro();
    int segundo = lerNumeroInteiro();
    int terceiro = lerNumeroInteiro();
    int quarto = lerNumeroInteiro();
    
    return 0;
}
