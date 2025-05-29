#include<stdio.h>
#include <stdlib.h>

typedef struct{
    
    char modelo[50];
    char marca[50];
    int cor;
    int ano;
    int tipodecombustivel;
    float valor;
    
}Carros;
Carros veiculo[5];
int id=1;
void cadastro();
void listv();
void filtrc();
void buscv();//buscar pelo id
int main(){
    int op;
    do{
        printf("seleciona uma opcao:\n");
        
        printf("1 - cadastro de veiculo\n");
        printf("2 - listar veiculo\n");
        printf("3 - filtrar combustivel\n");
        printf("4 - buscar veiculo\n");
        printf("5-sair\n");
        scanf("%d",&op);
        system("clear");
        switch(op){
            case 1:
            void cadastro();
            break;
            
            case 2:
            void listv();
            
            break;
            
            case 3:
            void filtro();
            break;
            
            case 4:
            void buscv();
            
            case 5:
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
void cadastro(){
    
    
    printf("Marca do veiculo\n");
    scanf("%s",veiculo[id].marca);
    printf("Modelo do veiculo\n");
    scanf("%s",veiculo[id].modelo);
    printf("Cor do veiculo\n");
    scanf("%s",veiculo[id].cor);
    printf("Ano do veiculo\n");
    scanf("%s",veiculo[id].marca);
    printf("valor:\n");
    scanf("%f",&veiculo[id].valor);
    printf("Tipo de combustivel: \n 1 - Etanol \n 2 - Gasolina \n 3 - Flex\n 4 - Elétrico");
    scanf("%d", &veiculo[id].tipodecombustivel);
    id++;
   
}
void listv() {
    
}
void filtc(){
    int tipo;
    printf("Qual combustivel deseja filtrar\n");
    scanf("%d", &tipo);
    for(int i=0;i<id;i++){
        if(tipo ==carros[i].tipodecombustivel);
        }
        else{
            printf("Tipo de Combustivel não encontrado");
        }
        printf("tipocombustivel:%d\n",veiculo[i].modelo);
        printf("valor:%.2f\n",veiculo[i].valor);
 
        vc=vendas[i].valor*vendas[i].;
        printf("valor da compra é:\n R$ %.2f\n", vc);
        
        vc=0;
    }
}
void f(){
    printf("calculo de faturamento\n");
    float fat=0;
    for( int i=0;i<nv;i++){
        fat+=(vendas[i].qnt*vendas[i].valor);
    }
    printf("faturamento=\n%.2f",fat);
    
}

