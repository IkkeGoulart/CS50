#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Declarando variáveis
    long card_number;
    int length = 0;
    string brand;
    // Pedindo o número do cartão, aceitando apenas valores positivos
    do
    {
        card_number = get_long("Digite o número do cartão de crédito: ");
    }
    while (card_number < 0);
    // Contando quantos digitos o número do cartão tem
    // Para não perder o valor original, é utilizada uma variável auxiliar c para o loop
    long c = card_number;

    while (c > 0)
    {
        c = c / 10;
        length++;
    }
    // variaveis auxiliares para o for
    int first_digit;
    int first_digits_sum = 0;
    int actual_digit;
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        // calculando potências de 10 para tratar de um digito por vez
        long factor = pow(10, i);

        actual_digit = (card_number / factor) % 10;
        // armazenando o valor do primeiro digito e da soma para verificações posteriores
        if (i >= length - 2)
        {
            first_digit = actual_digit;
            first_digits_sum += actual_digit;
        }
        // aplicando o algoritimo de Luhn nos números pares
        if (i % 2 != 0)
        {
            actual_digit = actual_digit * 2;
            // ajustando para valores de 2 digitos
            if (actual_digit > 9)
            {
                // o valor máximo é 18 e o minímo é 10, portanto sempre 1 é adicionado a soma
                actual_digit = actual_digit % 10;
                sum += 1;
            }
        }
        // adicionando o número atual à soma
        sum += actual_digit;
    }
    // verificação da bandeira do cartão
    if (sum % 10 == 0 && length == 15 && first_digit == 3 &&
        (first_digits_sum == 7 || first_digits_sum == 10))
    {
        brand = "AMEX";
    }

    else if (sum % 10 == 0 && length == 16 && first_digit == 5 && first_digits_sum >= 6 &&
             first_digits_sum <= 10)
    {
        brand = "MASTERCARD";
    }

    else if (sum % 10 == 0 && (length == 13 || length == 16) && first_digit == 4)
    {
        brand = "VISA";
    }

    else
    {
        brand = "INVALID";
    }

    printf("%s\n", brand);
}
