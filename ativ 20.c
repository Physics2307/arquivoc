/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void exercicio1();
void exercicio2();
void exercicio3();

int main()
{
    int op;
    printf("escolha uma das seguintes opções:\n");
    printf("1-exercicio1014\n");
    printf("2-exercicio1020\n");
    printf("3-exercicio1052\n");
    scanf("%d",&op);
    switch(op){
        case 1:
    exercicio1();
    break;
    case 2:
    exercicio2();
    break;
    case 3:
    exercicio3();
    break;
    }

    return 0;
}

void exercicio1() {
    int d;
    float g, c;
    
    c = d/g;
    
    printf("consumo=%.2f",c);
}


void exercicio2() {
    int dias, mes, ano;
    printf("inf a idade em dias:\n");
    scanf("%d",&dias);
    ano=dias/365;
    mes=(dias%ano)/30;
    dias=((dias%365)%30);
    printf("a idade em e: %d %d %d\n", ano, mes, dias);
}
void exercicio3(){
    int mes;
printf("Digite o numero do mes: ");
scanf("%d",&mes);
switch(mes){
case 1:
printf("January");
break;
case 2:
printf("February");
break;
case 3:
printf("March");
break;
case 4:
printf("April");
break;
case 5:
printf("May");
break;
case 6:
printf("June");
break;
case 7:
printf("July");
break;
case 8:
printf("August");
break;
case 9:
printf("September");
break;
case 10:
printf("Octuber");
break;
case 11:
printf("November");
break;
case 12:
printf("December");
break;
default:
 printf("Nao e um mes valido");}
}

