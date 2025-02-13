#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char encrypt_lowercase(char plain_char, int key);
char encrypt_uppercase(char plain_char, int key);

int main(int argc, string argv[]){
        //Validação da lista de argumentos
        //verificando se possui 2 argumentos(./caesar e a chave)
        if(argc != 2){
            printf("Usage ./caesar key\n");
            return 1;
        }
        //verificando se a chave é composto apenas de números
    for(int i = 0, n = strlen(argv[1]); i < n; i++){
        if(!isdigit(argv[1][i])){
            printf("Usage ./caesar key\n");
            return 1;
        }
    }
    //Conversão da chave de string para int
    int key = atoi(argv[1]);
    //Pedindo a palavra ao usuário
    string plaintext = get_string("Plaintext: ");

    int length = strlen(plaintext); //armazenando o tamanho da palavra a ser codificada
    char cyphertext[length + 1]; //criando um array para ser a palavra codifica
    //Loop de codificação
    for(int i = 0; i < length; i++){
        if(isupper(plaintext[i])){
            cyphertext[i] = encrypt_uppercase(plaintext[i], key);
        } else if(islower(plaintext[i])){
            cyphertext[i] = encrypt_lowercase(plaintext[i], key);
        } else {
            cyphertext[i] = plaintext[i];
        }
    }
    //o último elemento do array é \0, caracter que marca o fim de uma string
    cyphertext[length] = '\0';
    //impressão do texto codificado
    printf("Ciphertext: %s\n", cyphertext);

    return 0;
}
//Função de codificação
//plain_char + key - 'z' é o valor do quanto que ultrapassou a letra 'z'
//com o módulo, é ajustado para a diferença ser um número entre 0 e 25
//se plain_char + key não for maior que 'z', então essa conta não é necessária, bastando só somar
char encrypt_lowercase(char plain_char, int key){
    if(plain_char + key > 'z'){
        return ('a' - 1) + (plain_char + key - 'z') % 26;
    }
    return  plain_char + key;
}

char encrypt_uppercase(char plain_char, int key){
    if(plain_char + key > 'Z'){
        return ('A' - 1) + (plain_char + key - 'Z') % 26;
    }
    return plain_char + key;
}
