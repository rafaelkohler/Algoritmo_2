#include <iostream>



int main() {
    
    int opcao;
    printf("=======================\n");
    printf("== Escolha uma opcao ==\n");
    printf("== 1 - a ==\n");
    printf("== 2 - b ==\n");
    printf("== 3 - c ==\n");
    printf("=======================\n\n");
    scanf("%i", &opcao);
    
    switch (opcao) {
        case 1:
            printf("A opçao escolhida foi: A\n");
            break;
        case 2:
            printf("A opçao escolhida foi: B\n");
            break;
        case 3:
            printf("A opçao escolhida foi: C\n");
            break;
        default:
            printf("Opcao invalida!");
            break;
    }
}
