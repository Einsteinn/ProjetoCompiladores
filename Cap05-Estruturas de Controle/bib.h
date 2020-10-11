char look; /* O caracter lido "antecipadamente" (lookahead) */
int labelCount; /* Contador usado pelo gerador de rótulos */

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
void other();
void program();
void block(int exitLabel);
int newLabel();
int postLabel(int lbl);
void doIf(int exitLabel);
void condition();
void doWhile();
void doLoop();
void doRepeat();
void doFor();
void expression();
void doDo();
