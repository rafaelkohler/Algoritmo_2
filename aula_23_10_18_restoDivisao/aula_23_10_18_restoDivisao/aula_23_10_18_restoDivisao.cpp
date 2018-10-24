#include <iostream>



void apresentarRestoDiviComSwitch(){
    printf("Digite algum numero entre 0 ... 1000\n\n");
    int numero = 0;
    scanf("%i", &numero);
    int resto = numero % 5;
    
    switch (resto) {
        case 0:
            printf("Eh divisivel");
            break;
        case 1:
            printf("Sobrou 1");
            break;
        case 2:
            printf("Sobrou 2");
            break;
        case 3:
            printf("Sobrou 3");
            break;
        case 4:
            printf("Sobrou 4");
            break;
            
        default:
            break;
    }
}

int main() {
    apresentarRestoDiviComSwitch();
    
}
