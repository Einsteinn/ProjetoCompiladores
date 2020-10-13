int look; /* O caracter lido "antecipadamente" (lookahead) */

char cur_class; /* classe atual lida por getclass */

char cur_sign;

char cur_type;

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
void prog();
void prolog();
void epilog(char name);
void doblock(char name);
void declarations();
void labels();
void constants();
void types();
void variables();
void doprocedure();
void dofunction();
void statements();
void getclass();
void gettype();
void topdecl();
void dofunc(char name);
void dodata(char name);
void chardecl();
void intdecl();
void preproc();
