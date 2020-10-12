char look; /* O caracter lido "antecipadamente" (lookahead) */
int labelCount; /* indica o rótulo atual */

void init();
void nextChar();
void error(char *fmt, ...);
void fatal(char *fmt, ...);
void expected(char *fmt, ...);
void match(char c);
char getName();
char getNum();
int isAddOp(char c);
int isMulOp(char c);
void skipWhite();
void newLine();
void emit(char *fmt, ...);

int newLabel();
int postLabel(int lbl);

void ident();
void factor();
void signedFactor();
void assignment();
void multiply();
void term1();
void firstTerm();
void term();
void add();
void subtract();
void expression();
void divide();
void condition();

void doIf();
void block();
void program();