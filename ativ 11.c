#include<stdio.h>
int main(){
    int fat, i, n;
    printf("inf n:\n");
    scanf("%d",&n);
    fat=n;
for(i=n-1; i>=1; i++){
    fat=fat*i;
printf("o fatorial é: %d \n",fat);
return 0;
}
}