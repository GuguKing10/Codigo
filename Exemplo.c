#include <stdio.h>

    struct funcionario {
       
       char nome[255];
       int idade;
       int n_dep;
       float salario;
       
    };
    
    struct funcionario f;
    
    int main() {
        
        int i;
        
        for(i=0;i<2;i++) {
           printf("Entre com o nome:> ");
           gets("%s", &f[i].nome);
           printf("Entre com a idade:> ");
           scanf("%d", &f[i].idade);
           printf("Entre com os dependentes:> ");
           scanf("%d", &f[i].n_dep);
           printf("Entre com a salario:> ");
           scanf("%f", &f[i].salario);
           fflush(stdin);
        
        }
        
        system("csl");
       for(i=0;i<2;i++) {
       printf("\nNomes:%s", f[i].nome);
       printf("\nIdade:%d", f[i].idade);
       printf("\nFilhos:%d", f[i].n_dep);
       printf("\nSalario%f", f[i].salario);
    
    }
    
    }
