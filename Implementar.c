#include <stdio.h>

int main(){
  int opcao;
  do{
    printf("Menu principal\n");
    printf("1 - Criar contato\n");
    printf("2 - Deletar contato\n");
    printf("3 - Listar contato\n");
    printf("4 - Salvar lista de contato\n");
    printf("Escolha uma opção\n");
    scanf("%d", opcao);
  }while(opcao != 0);
}
