#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50

typedef struct {
    char remetente[max];
    char assunto[max];
    char mensagem[max];
} email;

typedef struct{
    char nome[max];
    char senha[max];
    int qtdRecebidos;
    int qtdEnviados;
    email *recebidos;
    email *enviados;
}usuario;

void cadastrarUsuario(char *nome[max], char *senha[max]){
    printf("Digite seu nome\n");
    scanf(" %49[^\n]", nome);
    printf("Digite sua senha\n");
    scanf(" %49[^\n]", senha);
    usuario u;
    strcpy(u.nome, nome);
    strcpy(u.senha, senha);    
    u.qtdEnviados = 0;
    u.qtdRecebidos = 0;
    u.enviados = NULL;
    u.recebidos = NULL;
    printf("nome: %s, senha: %s\n", nome, senha);
    printf("nome: %s, senha: %s, %d %d\n", u.nome, u.senha, u.qtdEnviados, u.qtdRecebidos);
}


int main(){
    int num;
    char nome[max];
    char senha[max];
    printf("escolha a opção:\n 1. cadastro\n 2.login\n ");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        cadastrarUsuario(nome, senha);        
        break;    
    default:
        printf("opção inválida, por favor escolha uma das opções:\n");
        printf("1. cadastro\n 2.login\n ");
        scanf("%d",&num);
        break;
    }
    return 0;
}