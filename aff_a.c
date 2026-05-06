/*### 3. Exercício: aff_a
Escreva um programa que receba uma string e exiba o primeiro caractere 'a' encontrado nela,
seguido por uma quebra de linha.
 * Se não houver o caractere 'a', exiba apenas uma quebra de linha.
 * Se o número de parâmetros for diferente de 1, exiba 'a' seguido por uma quebra de linha.*/

 #include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    // Se não tiver exatamente 1 argumento
    if (argc != 2)
    {
        write(1, "a\n", 2);
        return (0);
    }

    i = 0;

    // Percorre a string
    while (argv[1][i])
    {
        if (argv[1][i] == 'a')
        {
            write(1, "a\n", 2); // Exibe o primeiro 'a'
            return (0);
        }
        i++;
    }

    // Caso não encontre
    write(1, "\n", 1);

    return (0);
}