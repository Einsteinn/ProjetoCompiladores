#include "bib.c"

/* PROGRAMA PRINCIPAL */
int main()
{
    init();
    do
    {
        switch (look)
        {
        case '?':
            input();
            break;
        case '!':
            output();
            break;
        default:
            assignment();
            break;
        }
        newLine();
    } while (look != '.');

    return 0;
}
