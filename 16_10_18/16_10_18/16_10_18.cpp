#include <iostream>

int main() {
    // se
    if(true) {
        // este codigo sera executado
    }
    if(false){
        // este codigo nao sera executado
    }
    
    int a = 0;
    
    if(a == 0){
        printf("a igual a zero\n");
    }
    if(a != 0){
        printf("a diferente de zero\n");
    }
    
    int b = 5;
    
    if(b < a){
        printf("b eh menor que a\n\n");
    }
    if (a <= b) { // a pode ser menor, pode ser igual e pode ser diferente
        printf("A menor ou igual a B\n\n");
    }
    
    if(a == b) {
        printf("sao iguais\n\n");
    } else {
        printf("sao diferentes\n\n");
    }
    
    system("pause");
}
