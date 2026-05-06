
/*### 4. Exercício: maff_alpha
Escreva um programa que exiba o alfabeto, com as letras pares em maiúsculas
e as letras ímpares em minúsculas, seguido por uma nova linha.*/

#include <unistd.h>

int main(void)
{
    char letra;

    letra = 'a';

    while (letra <= 'z')
    {
        if ((letra - 'a') % 2 == 0)
            write(1, &letra, 1); // Letras pares em minúsculo
        else
        {
            char maiuscula;

            maiuscula = letra - 32; // Converte para maiúsculo
            write(1, &maiuscula, 1);
        }

        letra++;
    }

    write(1, "\n", 1);

    return (0);
}