/*### 2. Exercício: ft_print_numbers
Escreva uma função que exiba todos os dígitos em ordem crescente.
Sua função deve ser declarada da seguinte forma:*/


#include <unistd.h>

// Função que imprime os números de 0 a 9
void ft_print_numbers(void)
{
    char numero;

    numero = '0';

    while (numero <= '9')
    {
        write(1, &numero, 1);
        numero++;
    }
}

// Função principal do programa
int main(void)
{
    ft_print_numbers();      // Chama a função
    write(1, "\n", 1);       // Quebra de linha

    return (0);
}