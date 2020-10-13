#include "bib.c"

/* PROGRAMA PRINCIPAL */
int main()
{
    init();
    prog();

    if (look != '\n')
        fatal("Unexpected data after \'.\'");

    return 0;
}
