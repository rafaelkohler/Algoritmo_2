#include <iostream>

int main() {
    
    // e - && verdadeiro somente quando todas condicoes forem verdadeiras
    //ou - || basta que uma condicao seja verdadeira para ser verdadeiro
    

    printf("\nFavor informar o primeiro numero, A: ");
    int a;
    scanf("%i", &a);
    printf("\nFavor informar o segundo numero, B: ");
    int b;
    scanf("%i", &b);
    printf("\nFavor informar o terceiro numero, C: ");
    int c;
    scanf("%i", &c);
    printf("\nFavor informar o quarto numero, D: ");
    int d;
    scanf("%i", &d);
    
    if(a > b && a > c  && a > d){
        printf("\nO numero de A eh o maior numero\n\n");
    } else if (b > a && b > c && b > d){
        printf("\nO numero de B eh o maior numero\n\n");
    } else if (c > a && c > b && c > d){
        printf("\nO numero de C eh o maior numero");
    } else {
        printf("\nO numero de D eh o maior numero");
    }
}
