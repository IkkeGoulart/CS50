#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Declarando variaveis globais
    int initial_population;
    int final_population;
    int years = 0;
    // Pegando a quantidade inicial de lhamas, permitindo apenas respostas maiores que 9
    do
    {
        initial_population = get_int("Lhama Initial Population: ");
    }
    while (initial_population < 9);
    // Pegando a quantidade final de lhamas, permitindo apenas respostas maiores que a quantidade
    // inicial
    do
    {
        final_population = get_int("Lhama Final Population: ");
    }
    while (final_population < initial_population);
    // loop para aumetar a quantidade inicial ser maior ou igual a final, somando em 1 o ano cada
    // vez que o loop é ativado
    while (initial_population < final_population)
    {
        initial_population =
            initial_population + round(initial_population / 3) - round(initial_population / 4);
        years++;
    }
    // impressão da resposta
    printf("Years: %i", years);
}
