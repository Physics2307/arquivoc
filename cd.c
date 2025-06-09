 #include<stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    float valor;
itn ano;
char banda[50];
int estq;
}cd;
cd cds[10];
int np=0;
float vc=0;
void rcd();
void ccd();
void pcd();
int main(){
    int op;
    do{
        printf("selecione uma opcao:\n");
        printf("1- registrar cd\n");
        printf("2- cadastrar cd\n");
        printf("3-preco\n");
        printf("4-sair\n");
        scanf("%d",&op);
        switch(op){
            case 1:
            rcd();
            break;
            
            case 2:
            ccd();
            break;
            
            case 3:
            pcd();
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
    scanf("%s",cds[].nome);
    printf("inf a quantidade no estoque: \n");
    scanf("%d",&cds[].estq);
    printf("valor:\n");
    scanf("%f",&cds[].valor);
    printf("quantidade:\n");
    scanf("%d",&produtos[np].qnt);
    np++;

}

void ccd(){
    printf("comprar cd\n");
    for(int i=0;i<ncd;i++){
        printf("cd:%s\n",cds[i].nome);
        printf("preco:%.2f\n",cds[i].valor);
        printf("quantidade:%d",cds[i].qnt);
        
        printf("restante no estoque: %d",cds[i].estq);
        vc=cds[i].valor*cds[i].qnt;
        printf("valor da compra é:\n R$ %.2f\n", vc);
        printf("---------------------\n");
}
}
void pcd(){
    printf("calculo de preco\n");
    float p=0;
    for( int i=0;i<np;i++){
        p+=(cds[i].qnt*cds[i].valor);
    }
    printf("preco=\n%.2f",valor);
    
}
