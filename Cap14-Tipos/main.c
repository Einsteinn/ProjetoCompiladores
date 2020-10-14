#include "bib.c"

/* PROGRAMA PRINCIPAL */
int main()
{
    init();
    topdecls();
    match('B');
    newline();
    block();
    dumptable();

    return 0;
}
