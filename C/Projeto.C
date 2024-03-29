#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIVROS 50

typedef enum {
    TELA_SAIR = -1,
    TELA_PRINCIPAL,
    TELA_CADASTRAR,
    TELA_DESCADASTRAR,
    TELA_LISTAR_TODOS,
} Telas;
             
typedef struct {
    char titulo[128];
    char autor[128];
    char genero[64];
} Livro;

typedef struct {
    Telas menu;
    int totalLivros;
    Livro livros[MAX_LIVROS];
} Biblioteca;

int main(){
    Biblioteca catalogo;
    memset(&catalogo, 0x0, sizeof(catalogo));
    
    catalogo.menu = TELA_PRINCIPAL;

    FILE * memoria = fopen("catalogo.bin", "rb");
    if(memoria == NULL){
        printf("Erro ao abrir o arquivo de memórias de livros.\n");
        printf("Você deve criar o arquivo 'catalogo.bin' na primeira execução.\n");
        return 1;
    }
    size_t lidos = fread(catalogo.livros, sizeof(Livro), MAX_LIVROS, memoria);
    printf("%zd livros catalogados.\n", lidos);
    catalogo.totalLivros = (int)lidos;
    fclose(memoria);
    
    int opcao;
    while(catalogo.menu != TELA_SAIR){
        do{
            printf("-----------------------------------\n");
            printf("\t   Biblioteca");
            printf("\n-----------------------------------\n");
            printf("Escolha uma opcao:\n");
            printf("Digite 1 para cadastrar novo livro\n");
            printf("Digite 2 para remover um livro\n");
            printf("Digite 3 para ver todos os livros\n");
            printf("Digite 0 para sair do programa\n");
            scanf("%d", &opcao);
        } while(opcao < 0 || opcao > 3);
        
        switch(opcao){
            case 0: {
                catalogo.menu = TELA_SAIR; 
            } break;
            
            case 1: {
                if(catalogo.totalLivros >= MAX_LIVROS){
                    printf("\nA biblioteca está lotada, nao é possível adicionar um novo livro.\n");
                    break;
                }
              	printf("-----------------------------------\n");
                printf("\tTela de cadastro: ");
                printf("\n-----------------------------------\n");
                Livro novo;
                char opcao = 's';
                printf("Voce deseja adicionar um novo livro a sua biblioteca? Enter para continuar\n\n");
                int c = 0;
                while((c = getchar()) != '\n' && c != EOF){ }
                
                do{
                    memset(&novo, 0x0, sizeof(novo));
                    printf("Digite o titulo do livro: \n");
                    fgets(novo.titulo, 128, stdin);
                    int id = 0;
                    while(novo.titulo[id] != '\0' && novo.titulo[id] != '\n'){
                        id++;
                    }
                    novo.titulo[id] = '\0';
                    
                    printf("Digite o nome do autor do livro: \n");
                    fgets(novo.autor, 128, stdin);
                    id = 0;
                    while(novo.autor[id] != '\0' && novo.autor[id] != '\n'){
                        id++;
                    }
                    novo.autor[id] = '\0';
                    
                    printf("Digite o genero do livro: \n");
                    fgets(novo.genero, 64, stdin);
                    id = 0;
                    while(novo.genero[id] != '\0' && novo.genero[id] != '\n'){
                        id++;
                    }
                    novo.genero[id] = '\0';
                    
                    printf("Tem certeza que deseja adicionar este livro? [s/n]\n");
                    opcao = getchar();
                    int c = 0;
                    while((c = getchar()) != '\n' && c != EOF){ }
                }while (opcao == 'n' || opcao == 'N');
                
                catalogo.livros[catalogo.totalLivros] = novo;
                catalogo.totalLivros++;
                memoria = fopen("catalogo.bin", "w+b");
                if (memoria == NULL){
                    printf("Erro ao abrir o catalogo.bin\n");
                    return 0;
                }
                
                size_t salvos = fwrite(catalogo.livros, sizeof(Livro), catalogo.totalLivros, memoria);
                if(salvos != (size_t)catalogo.totalLivros){
                    printf("Erro ao salvar o livro na memoria do catalogo.bin\n");
                    return 1;
                }
                fclose(memoria);
                
                catalogo.menu = TELA_PRINCIPAL; 
            } break;

            case 2: {
                if(catalogo.totalLivros == 0){
                    printf("\nNao ha nenhum livro para ser removido.\n");
                    break;
                }
                
                printf("-----------------------------------\n");
                printf("\tTela de remocao: \n");
                printf("-----------------------------------\n");
                int i;
                for(i = 0; i < catalogo.totalLivros; i++){
                    printf("Livro %d\n", i);
                    printf("Titulo: %s\n", catalogo.livros[i].titulo);
                    printf("Escritor: %s\n", catalogo.livros[i].autor);
                    printf("Genero: %s\n", catalogo.livros[i].genero);
                    printf("-----------------------------------\n");
                }
                int indice = -1;
                do{
                    printf("Digite um indice do livro para ser removido 0 ate %d: ", i);
                    scanf("%d", &indice);
                    int c = 0;
                    while((c = getchar()) != '\n' && c != EOF){ }
                }while(indice < 0 || indice >= catalogo.totalLivros);
                
                for(i = indice; i < catalogo.totalLivros; i++){
                    catalogo.livros[i] = catalogo.livros[i + 1];
                    catalogo.totalLivros--;
                }
                memoria = fopen("catalogo.bin", "w+b");
                if(memoria == NULL){
                    printf("erro ao abrir o catalogo.bin");
                    return 0;
                }
                size_t salvos = fwrite(catalogo.livros, sizeof(Livro), catalogo.totalLivros, memoria);
                if(salvos != (size_t)catalogo.totalLivros){
                    printf("Erro ao salvar o livro na memoria do catalogo.bin\n");
                    return 1;
                }
                fclose(memoria);
            } break;
            
            case 3: {
                if(catalogo.totalLivros == 0){
                    printf("\nNao ha nenhum livro para ser exibido.\n");
                    break;
                }
                
                printf("-----------------------------------\n");
                printf("\tEstante: ");
                printf("\n-----------------------------------\n");
                
                int i;
                for(i = 0; i < catalogo.totalLivros; i++){
                    printf("Livro: %d\n", i);
                    printf("Titulo: %s\n", catalogo.livros[i].titulo);
                    printf("Genero: %s\n", catalogo.livros[i].genero);
                    printf("\n-----------------------------------\n");
                }
            } break;
        }
    }
      
    return (0);
}
