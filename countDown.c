/*### 1. Exercício: Countdown
Escreva um programa que exiba todos os dígitos em ordem decrescente, seguidos por uma nova linha.*/
//imprime 9876543210

#include <unistd.h>

int main(void)
{
    char numero;

    // Começa do caractere '9' e vai até '0'
    numero = '9';
    while (numero >= '0')
    {
        write(1, &numero, 1); // Exibe o número atual
        numero--;
    }

    write(1, "\n", 1); // Quebra de linha

    return (0);
}
