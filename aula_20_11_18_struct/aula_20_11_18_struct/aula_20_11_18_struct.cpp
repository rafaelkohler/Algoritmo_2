#include <iostream>

struct Carro {
    char modelo[20];
    char marca[20];
    int ano;
    char cor[20];
    char placa[8];
};

void lerDadosCarro() {
    
    struct Carro meuCarro;
    
    printf("Digite o modelo: ");
    fgets(meuCarro.modelo, 20, stdin);
    //gets(meuCarro.modelo);
    
    printf("Digite a marca: ");
    fgets(meuCarro.marca, 20, stdin);
    
    printf("Digite o ano: ");
    scanf("%i", &meuCarro.ano);
    getc(stdin);
    
    printf("Difite a cor: ");
    fgets(meuCarro.cor, 20, stdin);
    
    printf("Difite a placa: ");
    fgets(meuCarro.placa, 8, stdin);
    
}

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Funcionario {
    char nome[20];
    char cpf[20];
    struct Data dataNascimento;
    float salario;
};

void lerDadosFuncionario(){
    struct Funcionario funcionarios[2];
    int i;
    for(i=0; i<2; i++){
        printf("Digite o seu nome: ");
        fgets(funcionarios[i].nome, 20, stdin);
        
        printf("Digite o seu cpf: ");
        fgets(funcionarios[i].cpf, 20, stdin);
        
        printf("Digite a data do seu nascimento: ");
        scanf("%i", &funcionarios[i].dataNascimento.ano);
        getc(stdin);
        
        printf("Difite o seu salario: ");
        scanf("%f", &funcionarios[i].salario);
        getc(stdin);
    }
    
    for(i=0; i<2; i++){
        printf("\nNome: %s", funcionarios[i].nome);
        printf("\nCPF: %s", funcionarios[i].cpf);
        printf("\nAno: de Nascimento %i", funcionarios[i].dataNascimento.ano);
        printf("\nSalario: %f", funcionarios[i].salario);
    }
}


int main() {
    
    lerDadosFuncionario();
    
}
