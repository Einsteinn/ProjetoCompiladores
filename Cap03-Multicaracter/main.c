/*

Mais express�es: Vari�veis, fun��es, tokens multi-caracter, espa�os...

O c�digo abaixo foi escrito por Felipo Soranz e � uma adapta��o

do c�digo original em Pascal escrito por Jack W. Crenshaw em sua

s�rie "Let's Build a Compiler".

Este c�digo � de livre distribui��o e uso.

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

