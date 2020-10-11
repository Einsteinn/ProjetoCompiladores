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

int isBoolean(char c);
int getBoolean();
void boolExpression();
void boolXor();
void boolTerm();
int isOrOp(char c);
void notFactor();
void boolFactor();
void relation();
int isRelOp(char c);
void equals();
void notEquals();
void greater();
void less();
void ident();
void factor();
void signedFactor();
void multiply();
void divide();
void term();
void add();
void subtract();
void expression();
int isAddOp(char c);
int isMulOp(char c);
int newLabel();
int postLabel(int lbl);
void newLine();
void block(int exitLabel);
void other();
void doIf(int exitLabel);
void doWhile();
void doLoop();
void doRepeat();
void doFor();
void doDo();
void doBreak(int exitLabel);
void condition();
