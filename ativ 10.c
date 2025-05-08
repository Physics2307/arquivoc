#include<stdio.h>
int main(){
    int soma, subtração, multiplicação, divisão, sair, opções;
   do{
    printf("escolha uma das seguintes opções:\n");
    printf("1-soma\n");
    printf("2-subtração\n");
    printf("3-multiplicação\n");
    printf("4-divisão\n");
    printf("5-sair\n");
    scanf("%d",&opções);
    
    switch(opções){
        case 1:
        printf("você escolheu soma\n.");
        break;
        
        case 2:
        printf("você escolheu subtração\n");
        break;
        
        case 3:
        printf("você escolheu multiplicação\n");
        break;
        
        case 4:
        printf("você escolheu divisão\n");
        break;
        
        case 5:
        printf("deseja sair mesmo?\n");
        printf("1-sim\n");
        printf("2-não\n");
        switch(sair){
        case 1:
        printf("saindo\n");
        break;
        
        case 2:
        printf("continuar.\n");
        break;
        }
        default:
        printf("opção inválida!\n");
        return 1;
    }
    }while(opções<=5);
    
return 0;