int main(){//Inicio do programa
     int numeros[10];//Lista de números
    int i, maior, menor;
    
    printf("Digite 10 numeros inteiros:\n");
    for(i=0;i<10;i++){//Repetição
        scanf("%d", &numeros[i]);
    }
    maior = numeros[0];
    menor = numeros[0];
    
    for(i = 1; i <10; i++){//Repetição
        if(numeros[i] > maior){//Comparação
            maior = numeros[i];
        }
        if(numeros[i] < menor){//Comparação
            menor = numeros[i];
        }
    }
    printf("\nO maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);
    
    return 0;//Fim do programa
}