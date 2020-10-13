#include "bib.c"


/* PROGRAMA PRINCIPAL */
int main()
{
    init();

    while (look != EOF)
    {
        getclass();
        gettype();
        topdecl();
    }
}
