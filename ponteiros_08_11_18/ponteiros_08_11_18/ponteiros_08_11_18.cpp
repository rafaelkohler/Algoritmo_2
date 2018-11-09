#include <iostream>

void troca(float *a, float *b) {
    float c;
    c = *a;
    *a = *b;
    *b = c;
}

int main() {

    /*int *x, valor, y;
    valor = 35;
    x = &valor;
    y = *x;
    valor = 36;
    
    printf("Endereço da variável comum valor: %p\n", &valor); //& é para mostrar o endereço da variável VALOR.
    printf("Lendo o conteúdo do ponteiro x: %p\n", x); //X recebeu o endereço da variável VALOR.
    printf("Endereco da variável ponteiro x: %p\n", &x); //& é para mostrar o endereço da variável X
    printf("Conteúdo da variável apontada por x: %d\n", *x); // é o conteúdo que está dentro da variável do endereço do VALOR.
    printf("Conteúdo da variável comum y: %d\n", y); //Y é uma cópia do valor da variável que é o conteúdo que está dentra da variável do endereço do VALOR.
    printf("Endereço da variável ponteiro y: %p\n\n\n", &y); //o valor de y é uma cópia do valor declarado anteriormente.*/
    
    printf("\n--------------------------------------------------------\n");
    printf("\nExercício 001\n\n");
    
    int i=3, j=5;
    int *p, *q;
    p = &i;
    q = &j;
    
    printf("Endereço da variável &i: %p\n", &i);
    printf("Endereço da variável &j: %p\n", &j);
    printf("Lendo o conteúdo do ponteiro p: %p\n", p);
    printf("Lendo o conteúdo do ponteiro q: %p\n\n", q);
    printf("O conteúdo da variável p: %i\n", *p);
    printf("O conteúdo da variável q: %i\n\n", *q);
    
    printf("O resultado de p == &i é VERDADEIRO.\n\n");
    printf("O resultado de *p - *q é %i\n\n", *p-*q);
    printf("O resultado de *q + 1 é %i\n\n", (*q+1));
    printf("O resultado de *p ++ é %i\n\n", *p++);
    printf("O resultado de *p ++ é %i\n\n", ++*p);
    
    
    printf("\n--------------------------------------------------------\n");
    printf("\nExercício 002\n\n");
    
    float *x, *y;
    float w, z;
    x = &w;
    y = &z;
    *x = 3;
    *y = 9;
    troca(x, y);
    
    printf("%.f\n\n", *x);
    printf("%.f\n\n", *y);

}
