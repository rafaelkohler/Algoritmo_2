#include <iostream>

// variaveis globais
int a; // inteiro
float b; //real (pouca precisao)
double c; //real (grande precisao)


int main() {
    
    // variaveis locais
    char d; // caractere
    bool e; //booleano (true/false)
    printf("Hello, World!\n");
    printf("Teste\t\tTeste\n\n");
    
    printf("A\tB\tC\tD\n");
    printf("A\tB\tC\tD\n");
    printf("A\tB\tC\tD\n\n");
    
    printf("Mostrando o valor %i \n", 5); //%i i de inteiro| %f de float| %d de double| %c de caracter
    printf("A soma de %i e %i eh: %i \n", 99,10, 99+10);
    
    printf("Mostrando %.2f, que eh um numero real \n", 4.3);
    
    
    printf("Olha soh este numero: %i\n\n\n"); //erro
    
    int f;
    f = 8;
    a = f *2;
    
    printf("Resultado da multiplicacao de %i por 2 eh: %i\n", f,a);
    
    
    scanf("%i", &a); //scanf nao pula linha, nao da tab dentro do scanf.
    printf("\n\nValor digitado foi: %i\n\n", a);
    printf("Endereco de a: %i\n\n\n\n", &a); // endereco na memoria da variavel quando coloca o &.
    
    printf("Digite um valor real: ");
    scanf("%f", &b);
    printf("\n Voce digitou: %.2f", b);
    
    
    
    return 0;
}

