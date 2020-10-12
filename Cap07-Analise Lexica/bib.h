
char look; /* O caracter lido "antecipadamente" (lookahead) */

#define MAXNAME 30
#define MAXNUM 5

int token;
#define MAXTOKEN 30
char value[MAXTOKEN+1];
#define MAXOP 3
#define SYMTBL_SZ 1000
#define KWLIST_SZ 4
char *symtbl[SYMTBL_SZ];
//char *kwlist[KWLIST_SZ] = {"IF", "ELSE", "ENDIF", "END"};
//enum {KW_IF, KW_ELSE, KW_ENDIF, KW_END, TK_IDENT, TK_NUMBER, TK_OPERATOR };
//const char *kwcode = "ilee";

/* protótipos */

void init();
void nextChar();
void error(char *fmt, ...);
void fatal(char *fmt, ...);
void expected(char *fmt, ...);
void match(char c);
void getName(); 
void getNum();
void emit(char *fmt, ...);
/*_____________________________________*/

void skipWhite();
void scan();
void newLine();
int isOp(char c);
void getOp();
void skipComma();
int lookup(char *s, char *list[], int size);