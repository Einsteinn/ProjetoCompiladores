#include "bib.c"

/* PROGRAMA PRINCIPAL */
int main()
{
    init();

    do
    {
        scan();
        switch (token)
        {
        case 'x':
            printf("Ident: ");
            break;
        case '#':
            printf("Number: ");
            break;
        case 'i':
        case 'l':
        case 'e':
            printf("Keyword: ");
            break;
        default:
            printf("Operator: ");
            break;
        }
        printf("%s\n", value);

        if (value[0] == '\n')
            newLine();

    } while (strcmp(value, "END") == 1); //while (strcmp(value, "END") == 0);

    return 0;
}
