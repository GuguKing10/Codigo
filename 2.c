#include <stdio.h>
#include <stdlib.h>

    

    struct aluno {

        char nome[255];
        char matricula[255];
        char curso[255];

    };
        
    int main() {

        struct aluno a[5];

        int i, j;

        for(i=0;i<5;i++) {

            printf("Nome: ");
            gets(a[i].nome);
            printf("Matricula: ");
            gets(a[i].matricula);
            printf("Curso: ");
            gets(a[i].curso);
            fflush(stdin);
			system("cls");

        }
            
        printf("____LISTA____");
            
        for(j=0;j<i;j++) {
            	
            printf("\n\nAluno %d\n", j+1);
            printf("\n%s\n%s\n%s\n", a[j].nome, a[j].matricula, a[j].curso);
            	
        }
            
        printf("\n\n");
            
    system("pause");
	return 0;

    }

