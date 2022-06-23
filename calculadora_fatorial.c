#include<stdio.h>
int main (void){
    int num, fat;

    printf("========CALCULADORA FATORIAL (N!)========\n\n");
    printf("Informe um número para saber seu fatorial:\n");
    scanf("%d", &num);

    for(fat=1; num>0; ){
    fat=fat*num--;
    }
    printf("\nO fatorial do valor informado é igual a %d\n", fat);

    return 0;

}
