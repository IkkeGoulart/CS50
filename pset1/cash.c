#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){

    //Declarando variavéis
    float change;
    int cents;
    int coins = 0;

    //Mantendo o troco como um número positivo
    do{
        change = get_float("Change:");
    }
    while(change < 0);

    //Convertendo para centavos
    cents = round(change*100);

    //Verificando quantas moedas de 25 são necessárias
    if(cents >= 25) {
        coins = coins + (cents/25);
        cents = cents - 25 * (cents/25);
    }
    //Verificando quantas moedas de 10 são necessárias
    if(cents >= 10) {
        coins = coins + (cents/10);
        cents = cents - 10 * (cents/10);
    }
    //Verificando quantas moedas de 5 são necessárias
    if(cents >= 5) {
        coins = coins + (cents/5);
        cents = cents - 5 * (cents/5);
    }
    //Adicionando as moedas de 1. Caso não sejam necessárias, o valor de cents será 0
    coins = coins + cents;

    printf("Quantidade mínima de moedas:\n");
    printf("%i", coins);
}
