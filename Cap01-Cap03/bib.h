char look; /* O caracter lido "antecipadamente" (lookahead) */
#define MAXNAME 30
#define MAXNUM 5

/* protótipos */
void init();
void nextChar();
void error(char *fmt, ...);
void fatal(char *fmt, ...);
void expected(char *fmt, ...);
void match(char c);
char getName();
char getNum();
void emit(char *fmt, ...);
