#include <iostream>

int main() {

int arr[5];
int i;

while (i < 5) {
    printf("\nOs valores estao em ordem crescente?:\n");
    printf("-----------------------------------------\n");
    
    printf("Insira 5 valores :\n");
    
    for(i=0; i<5; i++) {
        printf("valor - %d : ",i);
        scanf("%d", &arr[i]);
    }
    
    if(arr[0] < arr[1] && arr[1] < arr[2] &&
       arr[2] < arr[3] && arr[3] < arr[4] && arr[4] < arr[5]) {
        for(i=0; i<5; i++) {
            printf("%d ", arr[i]);
            } printf("\nEstes são os valores: \n");
            printf("Eles sao crescente.");
        } else
            printf("\n\nOs valores nao estao em ordem crescente.");
    }
}
