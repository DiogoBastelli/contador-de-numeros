#include <stdio.h>

int main(){
int quantidade = 0,
cont = 1 ,
i ,
numero = 0 , 
somaPositivos =0 ,
somaNegativos = 0 , 
zeros = 0 ,
escolha ,
continuar = 1 ;

    while (continuar == 1){
        printf("insira a quantidade de numeros: ");
    scanf("%d" , &quantidade);

    for(i = 0; i < quantidade; i++){
    printf("insira o numero %d: " , i+1 );
    scanf("%d" , &numero);

    if(numero > 0){
    somaPositivos = somaPositivos + numero;

    } else if (numero < 0 ){
    somaNegativos += numero;

    }else {
    zeros++;
    }
    }

    printf("insira a operacao desejada.\n");
    printf("1-Calcular soma dos numeros positos \n");
    printf("2-Calcular soma dos numeros negativos\n");
    printf("3-Verificar a quantidade de zeros\n");
    scanf("%d" , &escolha);

switch (escolha){
case 1: printf("A soma dos numeros positivos: %d\n" , somaPositivos);
    break;

case 2: printf("A soma dos numeros negativos: %d\n" , somaNegativos);
break;

case 3: printf("A quantidade de zeros sao de: %d\n" , zeros);
    break;
}

printf("Deseja recomecar?\n1-Sim \n2-Nao");
scanf("%d" , &continuar);

if (continuar != 1){
return 1;

}
}
}
