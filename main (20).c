#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
    setlocale(LC_ALL,"");
int opcoes, checkin, servicos, cpf, rg;
char nome[200], endereco[100], email[210], pedidos, problemas;

    do{
    printf("bem vindo ao reenye's hotel. escolha uma das opcoes abaixo: \n");
    printf("1-fazer checkin \n");
    printf("2-solicitar servico \n");
    printf("3-fazer pedido \n");
    printf("4-sair \n");
    scanf("%d",&opcoes);
    
          switch(opcoes){
              case 1:
    printf("informe seu nome \n");
    scanf("%s",nome);
    printf("informe seu endereco \n");
    scanf("%s",endereco);
    printf("informe seu email \n");
    scanf("%s",email);
    printf("informe seu cpf \n");
    scanf("%d",&cpf);
    printf("informe seu rg \n");
    scanf("%d",&rg);
    
    break;
              case 2:
    printf("informe o servico que gostaria de solicitar: \n");
    printf("1-arrumar o qarto \n");
    printf("2-entregas diretamente no quarto \n");
    printf("3-problemas de internet \n");
    printf("4-privada entupida \n");
    printf("5-outros \n");
    printf("6-sair \n");
           switch(pedidos){
             case 1:
    printf("para solicitar que arrume o quarto, clique em enter\n");
    break;
             case 2:
    printf("para solicitar entregas no quarto, clique em enter\n");
    break;
               case 3:
    printf("para solicitar análise da internet, clique em enter\n");
    printf("selecione um dos problemas:\n");
    printf("1-internet lenta \n, 2-quedas frequentes na internet \n, 3-outros\n");
        break;
               case 4:
    printf("solicite um(a) desentupidor(a)\n");
    break;
               case 5:
    printf("escreva o(s) problema(s)\n");
    scanf("%s",problemas);
    break;
        case 6:
    printf("deseja sair mesmo?\n");
    printf("1-sim \n, 2-nao\n");
    break;}
    default:
    printf("opcao invalida.");
    return 1;
          }
    
  }while(op!=4);
  return 0;
         }