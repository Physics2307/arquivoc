#include<stdio.h>
typedef struct{
    char nomec[100], nomep[50];
    float p;
    int qnt, cpf;
    char end, email;
}pizza;
cc=0;
pizza pizzas[50];
void cadsc();
void cadspz();
void listc();
void venderp();
int main(){
    int op;
    do{
    printf("esc uma op\n");
    printf("1-cadastrar cliente\n");
    printf("2-cadastrar pizza\n");
    printf("3-listar clientes cadastrados\n");
    printf("4-vender pizzas\n");
    printf("5-sair\n");
    scanf("%d",&op);
    switch(op){
        case 1:
        cadsc();
        break;
        
        case 2:
        cadspz();
        break;
        
        case 3:
        listc();
        break;
        
        case 4:
        venderp();
        break;
        
        case 5:
        printf("saindo\n");
        break;
        
        default:
        printf("opcao invalida!\n");
        break;
    }
}while(op!=4);

return 0;
}

void cadsc(){
    for(int i=0;i<3;i++){
    printf("inf o nome: ");
    scanf("%s",pizzas[i].nomec);
    printf("inf o endereco: ");
    scanf("%s",pizzas[i].end);
    printf("inf o email: ");
    scanf("%s",pizzas[i].email);
    printf("inf o cpf: ");
    scanf("%d",pizzas[i].cpf);
}
}

void cadspz(){
    for(i=0;i<3){
    printf("inf o nome: ");
    scanf("%s",pizzas[i].nomep);
    printf("inf o preco: ");
    scanf("%f",pizzas[i].p);
}
}

void listc(){
    for(i=0;i<3;i++){
        printf("nome:%s\n",pizzas[i].nomec);
    }
}
void vender(){
    int op;
printf("esc uma op\n");
printf("0-nao\n");
printf("1-sim\n");
scanf("%d",&op);
if(cc=1){
    printf("inf a pizza\n");
    p=qnt*pizza.p;
}
printf("pizza vendida.");
}

