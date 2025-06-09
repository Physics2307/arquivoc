#include<stdio.h>
typedef struct{
    char nome[50];
    int idade;
}Pessoa;
Pessoa p;
int main(){
    struct Pessoa;
    printf("dig o nome: ");
    scanf("%s",p.nome);
    printf("dig a idade: ");
    scanf("%d",&p.idade);
    
    printf("%s\n",p.nome);
    printf("%d\n",p.idade);
    
    return 0;
}