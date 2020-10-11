/*

Mais expressões: Variáveis, funções, tokens multi-caracter, espaços...

O código abaixo foi escrito por Felipo Soranz e é uma adaptação

do código original em Pascal escrito por Jack W. Crenshaw em sua

série "Let's Build a Compiler".

Este código é de livre distribuição e uso.

*/

#include "bib.c"

/* PROGRAMA PRINCIPAL */

int main()

{
    init();

    assignment();

    if (look != '\n')

        expected("NewLine");

    return 0;

}

