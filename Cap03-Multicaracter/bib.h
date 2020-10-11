
#define MAXNAME 30

#define MAXNUM 5



char look; /* O caracter lido "antecipadamente" (lookahead) */



/* protótipos */

void init();

void nextChar();

void error(char *fmt, ...);

void fatal(char *fmt, ...);

void expected(char *fmt, ...);

void skipWhite();

void match(char c);

void getName(char *name);

void getNum(char *num);

void emit(char *fmt, ...);

int isAddOp(char c);

void ident();

void factor();

void multiply();

void divide();

void term();

void add();

void subtract();

void expression();

void assignment();
