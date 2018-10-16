#include <iostream>

int soma(int x, int y){
    int a = x + y;
    return a;
}

int subtracao(int x, int y){
    int a = x - y;
    return a;
}

double divi(double x, double
            y){
    double a = x / y;
    return (double) a;
}

int mult(int x, int y){
    int a = x * y;
    return a;
}

int main() {
    int a;
    printf("\nFavor digitar um numero inteiro: ");
    scanf("%i", &a);
    
    int b;
    printf("\nFavor digitar um numero inteiro: ");
    scanf("%i", &b);
    
    int r = soma(a, b);
    int s = subtracao(a, b);
    double d = divi((double)a, (double)b);
    int m = mult(a, b);
    
    printf("\nValor da soma: %i\n", r);
    printf("\nValor da subtracao: %i\n", s);
    printf("\nValor da divisao: %.2f\n", d);
    printf("\nValor da multiplicacao: %i\n", m);
    
    system("pause");
}
