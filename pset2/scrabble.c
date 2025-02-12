#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
//Array com a pontuação de cada letra em ordem alfabética
//A [0], B [1], C[2]... Z[25]
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void){
    //Perguntando as palavras aos jogadores e calculando as pontuações
    string player1 = get_string("Player 1 Word: ");
    int score_player1 = compute_score(player1);

    string player2 = get_string("Player 2 Word: ");
    int score_player2 = compute_score(player2);

    //Verificando o vencedor
    if(score_player1 > score_player2){
        printf("Player 1 wins!");
    }

    else if(score_player1 < score_player2){
        printf("Player 2 wins!");
    }

    else{
        printf("Tie!");
    }
}
//Função que calcula a pontuação
int compute_score(string word){
    int score = 0;

    for(int i = 0, n = strlen(word); i < n; i++){
        if(isalpha(word[i]))                            //Verifica se o caracter é uma letra
            score += POINTS[toupper(word[i]) - 'A'];    //Aumenta o score passando a letra(maiusucula) - A
            //Dessa forma, se a letra for A, então o indice será 0 e assim por diante
    }

    return score;
}
