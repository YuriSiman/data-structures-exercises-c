#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char string1[50], string2[50], caracter, espaco[50] = " ";
    int cont = 0;
    
    printf("\nDigite a primeira palavra:");
    gets(string1);
    
    printf("\nDigite a segunda palavra:");
    gets(string2);
    
    printf("\nConcatenando a segunda palavra com a primeira, formando uma única, e separando-as por espaço");
    strcat(espaco, string2);
    strcat(string1, espaco);
    printf("\nResultado da primeira palavra: %s", string1);
    
    printf("\n\nExibindo as duas palavras em ordem alfabética - Resultado numérico obtido: %d", strcmp(string1, string2));
    strcmp(string1, string2) < 0 ? printf("\n%s\n%s", string1, string2) : printf("\n%s\n%s", string2, string1);
    
    printf("\n\nSubstituindo a segunda palavra pela primeira");
    strcpy(string2, string1);
    printf("\nResultado da segunda palavra: %s", string2);
    
    printf("\n\nSubstituindo um caracter por um '*'\nDigite um caracter para fazer a troca na primeira palavra:");
    scanf("%c", &caracter);
    for(int i = 0; i < 50; i++){
        string1[i] == toupper(caracter) || string1[i] == tolower(caracter) ? string1[i] = '*' : string1[i];
    }
    printf("\nResultado da primeira palavra: %s", string1);
    
    printf("\n\nExibindo o tamanho da primeira palavra: %d caracteres", strlen(string1));
    
    printf("\n\nExibindo o tamanho da segunda palavra, sem utilizar nenhuma função da biblioteca string.h:");
    for(int i = 0; i < 50; i++){
        if(string2[i] == '\0') break;
            cont++;
    }
    printf(" %d caracteres", cont);
    
    printf("\n\nAntes da cópia\nPrimeira Palavra: %s\nSegunda Palavra: %s", string1, string2);
    for(int i = 0; i < 50; i++){
        if(string2[i] == '\0') break;
            string1[i] = string2[i];
    }
    printf("\n\nDepois da cópia\nPrimeira Palavra: %s\nSegunda Palavra: %s", string1, string2);
    
    return 0;
}
