#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ta 10

    
	// Agrupar dados de alunos
		
	struct aluno {
    		
    	char nome[255];
    	char matricula[15];
    	char media[5];
    		
    };
    	
    
	// Fazer a leitura dos alunos
	
	void leitura (struct aluno vet[ta]) {
			
		int i;
			
			for(i=0;i<ta;i++) {
    	    	
    	    	printf("\nNOME: ");
				fgets(vet[i].nome, sizeof(vet[i].nome) , stdin);
				printf("MATRICULA: ");
    	    	fgets(vet[i].matricula, sizeof(vet[i].matricula) , stdin);
    	    	printf("NOTA: ");
				fgets(vet[i].media, sizeof(vet[i].media) , stdin);
				fflush(stdin);
    	    	
    	    	system("cls");
				    	
			}
	       
	}
    
	
	// Exibir todos os alunos
	
	void exibe(struct aluno vet[ta]) {
		
		int i;
            
			for (i=0;i<ta;i++){
                
				printf ("\nNOME: %s", vet[i].nome);
                printf ("MATRICULA: %s", vet[i].matricula);
                printf ("NOTA: %s", vet[i].media);
		
		    }
	
	}
		
    
	// Separar alunos aprovados
		    
    void aprovados(struct aluno vet[ta]) {
    	
    	int i;
    	    
    	    printf("\n\nAPROVADO!\n\n");
    	    
    	    for(i=0;i<ta;i++) {
    	    	
    	    	if(atof(vet[i].media) >= 5.0){
    	    	
    	    	    printf("NOME: %s", vet[i].nome);
    	    	    printf("MATRICULA: %s", vet[i].matricula);
    	    	    printf("NOTA: %s\n", vet[i].media);
    	    	
    	        }
			   
    	    }
    	
    }
    
	
	// Separar alunos reprovados	
    
	void reprovados(struct aluno vet[ta]){
        
		int i;
            
            printf ("\n\nREPROVADO!\n\n");
            
			for (i=0;i<ta;i++){
                
                if(atof(vet[i].media) < 5.0){
				
                    printf("NOME: %s", vet[i].nome);
                    printf("MATRICULA: %s", vet[i].matricula);
                    printf("NOTA: %s\n", vet[i].media);
                
                }
                
            }
		  
    }
    
	
	// Pausar ao receber as informa��es
	
	void pausar() {
            
		printf("\nPressione Enter para continuar...");
        getchar(); // Aguarda que o usu�rio pressione Enter
	
    }
    
	
	// Menu interativo
	
	int main () { 
	 
	    struct aluno vet[ta]; 
		int opcao = 0;
	
        
		do {
		
		    printf ("\n---------- MENU ----------\n");
			printf("\n1 - Leitura dos alunos");
            printf("\n2 - Exibir todos os alunos");
            printf("\n3 - Exibir Aprovados");
            printf("\n4 - Exibir Reprovados"); 
            printf("\n5 - Sair");
            printf("\n\nQual a sua opcao? ");
		    scanf("%d", & opcao);
		    getchar();
		    system("cls");
        
            switch (opcao){
            
            
			    case 1: leitura (vet);
						break;
            
                case 2: exibe(vet);
						pausar();
						break; 
                    
                case 3: aprovados (vet);
						pausar();
						break;
                    
                case 4: reprovados (vet);
						pausar();
						break; 
            
                case 5:
            	        printf("Saindo...\n");
						return 0;
						break;
                
				default: 
                        printf ("\nOpcao invalida!\n");
        
		    }
		    
		    system("cls");
    
	    } while (opcao != 5);
     
    }
        
    
