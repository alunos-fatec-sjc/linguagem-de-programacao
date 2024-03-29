/*
    Faça uma rotina que recebe um string qualquer e retorna-o invertido.
    Por exemplo, se a string
    passada por parâmetro fosse "teste", a rotina deve retornar "etset".
*/

#include<stdio.h>
#include<string.h>

char* inverter_string(char str[100]) {
    int size = strlen(str) - 1;
    static char str_reversa[100];
    for(int i = size; i >= 0; i--) {
        str_reversa[size - i] = str[i];
    }
    return str_reversa;

}

int main()
{
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    printf("String invertida: %s\n", inverter_string(str));
    return 0;
}
