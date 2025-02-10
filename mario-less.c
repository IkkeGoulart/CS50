#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int height;

    // Loop para que valor de height sempre seja positivo
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // loops aninhados nos quais i e j atuam como coordenadas
    for (int i = 0; i < height; i++)
    {

        for (int j = 0; j < height; j++)
        {
            // determina o que será impresso em cada coodernada a partir da soma de i e j
            if (i + j < height - 1)
                printf(" ");
            else
                printf("#");
        }
        // quebra de linha para formar o triângulo
        printf("\n");
    }
}
