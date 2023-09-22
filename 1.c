#include <stdio.h>
#include <stdlib.h>

    int main() {

    struct endereco {
           
        char estado[255];
        char cidade[255];
        char rua[255];
        char cep[11];
        int numero;
           
    };
    
    struct pessoa {
           
        char nome[255];
        int idade;
        struct endereco e;
        
    };
    
    struct pessoa p;
    
        printf("Nome: ");
        gets(p.nome);
        fflush(stdin);
        printf("Idade: ");
        scanf("%d",&p.idade);
        printf("Estado: ");
        fflush(stdin);
        gets(p.e.estado);
        printf("Cidade: ");
        fflush(stdin);
        gets(p.e.cidade);
        printf("Rua: ");
        fflush(stdin);
        gets(p.e.rua);
        printf("Cep: ");
        fflush(stdin);
        gets(p.e.cep);
        printf("Numero: ");
        scanf("%d", &p.e.numero);
        
        printf("\n %s\n %d\n %s\n %s\n %s\n %s\n %d\n\n", p.nome, p.idade, p.e.estado, p.e.cidade, p.e.rua, p.e.cep, p.e.numero);
     
     system("pause");
                            
    }     

