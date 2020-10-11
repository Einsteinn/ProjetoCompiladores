char look; /* O caracter lido "antecipadamente" (lookahead) */
#define MAXVAR 26
int var[MAXVAR];
#define MAXNAME 30
#define MAXNUM 5
/* Protótipos */

/* 1 Introdução */
void init();
void nextChar();
void error(char *fmt, ...);
void fatal(char *fmt, ...);
void expected(char *fmt, ...);
void match(char c);
char getName();
int getNum();
void emit(char *fmt, ...);

/* 2 Análise de Expressões */
int term();
int expression();
void add();
void subtract(); 
void multiply();
void divide();
int factor();
int isAddOp(char c);
int isMulOp(char c);

/* 3 Mais expressões*/
void ident();
void assignment();
void skipWhite();

/* 4 Interpretadores */
void initVar();
void newLine();
void input();
void output();