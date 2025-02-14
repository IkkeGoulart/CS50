#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]){
    //Validações do argumento
    if(argc != 2){
        printf("Usage: ./substitution key");
        return 1;
    }

    if(strlen(argv[1]) != 26){
        printf("Key must contain 26 characters.");
        return 1;
    }
    //Two Pointer para checar caracteres repetidos e se todos são letras
    for(int left = 0; left < 26; left++){
        if(!isalpha(argv[1][left])){
            printf("Key must contain 26 characters.");
            return 1;
        }

        for(int right = 25 - left; left < right; right--){
            if(toupper(argv[1][left]) == toupper(argv[1][right])){
                printf("Key must not contain repeat characters");
                return 1;
            }
        }
    }
    //copiando para um array key para deixar mais fácil a leitura
    char key[26];

    for(int i = 0; i < 26; i++){
        key[i] = argv[1][i];
    }

    string plaintext = get_string("Plaintext: ");   //Pedindo o texto a ser codificada
    int length = strlen(plaintext);                 //Armazenando o tamanho do texto

    char cyphertext[length + 1];                    //Array dos caracteres codificados
    cyphertext[length] = '\0';                      //Último dígito deve ser '\0' para evitar erros de impressão quando imprimido como string

    for(int i = 0; i < length; i++){                //loop para codificar
        if(isupper(plaintext[i])){                  //Mantendo o case maiúsculo
            cyphertext[i] = toupper(key[plaintext[i] - 'A']);
        } else if(islower(plaintext[i])){           //Mantendo o case minúsculo
            cyphertext[i] = tolower(key[plaintext[i] - 'a']);
        } else {                                    //Caracteres que não são letras
            cyphertext[i] = plaintext[i];
        }
    }

    printf("ciphertext: %s\n", cyphertext);         //Imprimindo o texto cifrado


    return 0;                                       //Retorno de sucesso 
}
