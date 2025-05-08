#include<stdio.h>
int main(){
    float n[10], med;
    int i=0;
    for(i=0;i<=9;i++){
        scanf("%f",&n[i]);
    med+=n[i]/10;
    }
printf("MEDIA= %.2f\n",med);
return 0;
}