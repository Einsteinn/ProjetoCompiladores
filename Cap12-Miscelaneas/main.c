#include "bib.c"

/* PROGRAMA PRINCIPAL */
int main()
{
    init();

    matchstring("PROGRAM");
    semicolon();
    header();
    topdecls();
    matchstring("BEGIN");
    prolog();
    block();
    matchstring("END");
    epilog();

    return 0;
}
