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

