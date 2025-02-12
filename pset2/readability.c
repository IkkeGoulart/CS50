#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Armazenando o texto a ser analisado
    string text = get_string("Text: ");
    //Declarando as variaveis para o  índice Coleman-Liau
    int letters = 0;
    int sentences = 0;
    int words = 0;

    for (int i = 0, n = strlen(text); i < n; i++) //Loop para percorrer o texto
    {
        if (isalpha(text[i])) //Verificação letras
        {
            letters++;
        }

        if (text[i] == '!' || text[i] == '.' || text[i] == '?') //Verificando fim de frase
        {
            sentences++;
        }

        if (text[i - 1] != ' ' && text[i] == ' ' && text[i + 1] != ' ') //Verificando os espaços entre palavras (evitando espaços duplos)
        {
            words++;
        }
    }

    words++; //Adicionando a última palavra à contagem
    //Calculando o índice por partes
    float l = 100.0 * letters / words;
    float s = 100.0 * sentences / words;

    int index = round(0.0588 * l - 0.296 * s - 15.8);
    //Imprimindo a escolaridade do texto
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
