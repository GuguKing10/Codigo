#include <stdio.h>
#include <string.h>
#define t 2


    struct dados {

        char nome[255];
        char endereco[50];
        char nascimento[15];
        char cidade[50];
        char cep[15];
        char email[50];
   
    };
    

    void leitura (struct dados d[t]) {

        int i;

            for(i=0;i<t;i++) {

                printf("NOME: ");
                fgets(d[i].nome, sizeof(d[i].nome), stdin);
                printf("ENDERECO: ");
                fgets(d[i].endereco, sizeof(d[i].endereco) , stdin);
                fflush(stdin);
                printf("DATA DE NASCIMENTO: ");
                fgets(d[i].nascimento, sizeof(d[i].nascimento), stdin);
                fflush(stdin);
                printf("CIDADE: ");
                fgets(d[i].cidade, sizeof(d[i].cidade) , stdin);
                fflush(stdin);
                printf("CEP: ");
                fgets(d[i].cep, sizeof(d[i].cep) , stdin);
                fflush(stdin);
                printf("EMAIL: ");
                fgets(d[i].email, sizeof(d[i].email) , stdin);
                
                fflush(stdin);
                system("cls");

            }

    }

    void exibir (struct dados d[t]) {

        int i;

            for(i=0;i<t;i++) {

                printf("NOME: %s", d[i].nome);
                printf("ENDERECO: %s", d[i].endereco);
                printf("DATA DE NASCIMENTO: %s", d[i].nascimento);
                printf("CIDADE: %s", d[i].cidade);
                printf("CEP: %s", d[i].cep);
                printf("EMAIL: %s\n", d[i].email);

            }
            
    }


    void pausar () {

        printf("\nPressione Enter para voltar ao menu ...");
        getchar();

    }

    
    int main () {

        struct dados d[t];
        int opcao = 0;

        do{

            printf("\n----------- MENU -----------");
            printf("\n1 - Cadastrar Dados");
            printf("\n2 - Exibir Dados Cadastrados");
            printf("\n3 - Sair");
            
            printf("\n\nQual a Opcao? ");
            scanf("%d", &opcao);
            getchar();
            system("cls");

            switch(opcao) {

                case 1: leitura(d);
                        break;

                case 2: exibir(d);
                        pausar();
                        system("cls");
                        break;

                case 3:
                        printf("Saindo...");
                        return 0;
                        break;

                default:
                        printf("Opcao Invalida!!");

            }
        
        } while(opcao != 3);

        system("pause");
    
    }