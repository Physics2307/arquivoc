 #include<stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    float valor;
    int qnt;
    int estq;
}Produto;
Produto produtos[10];
int np=0;
float vc=0;
void rp();
void cp();
void p();
int main(){
    int op;
    do{
        printf("selecione uma opcao:\n");
        printf("1- registrar produto\n");
        printf("2- ver informacoes do produto\n");
        printf("3-preco\n");
        printf("4-sair\n");
        scanf("%d",&op);
        system("clear");
        switch(op){
            case 1:
            rp();
            break;
            
            case 2:
            cp();
            break;
            
            case 3:
            p();
            break;
            
            case 4:
            printf("ate mais!\n");
            break;
            
            default:
            printf("opcao invalida\n");
            break;
        }
        printf("enter para continuar\n");
    getchar();
    getchar();
    system("clear");
    
    }while(op!=4);
    return 0;
}
void rp(){
    
    printf("novo produto:\n");
    printf("nome do produo\n");
    scanf("%s",produtos[np].nome);
    printf("inf a quantidade no estoque: \n");
    scanf("%d",&produtos[np].estq);
    printf("valor:\n");
    scanf("%f",&produtos[np].valor);
    printf("quantidade:\n");
    scanf("%d",&produtos[np].qnt);
    np++;

}

void cp(){
    printf("comprar produto\n");
    for(int i=0;i<np;i++){
        printf("produto:%s\n",produtos[i].nome);
        printf("preco:%.2f\n",produtos[i].valor);
        printf("quantidade:%d",produtos[i].qnt);
        
        printf("restante no estoque: %d",produtos[i].estq);
        vc=produtos[i].valor*produtos[i].qnt;
        printf("valor da compra é:\n R$ %.2f\n", vc);
        printf("---------------------\n");
        vc=0;
}
}
void p(){
    printf("calculo de preco\n");
    float p=0;
    for( int i=0;i<np;i++){
        p+=(produtos[i].qnt*produtos[i].valor);
    }
    printf("preco=\n%.2f",p);
    
}
