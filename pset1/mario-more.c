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

    for (int i = 0; i < height; i++)
    {

        for (int j = 0; j < height; j++)
        {
            if (i + j < height - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }

        printf("  ");

        for (int k = 0; k < height; k++)
        {
            if (k <= i)
            {
                printf("#");
            }

        }

        printf("\n");
    }
}
