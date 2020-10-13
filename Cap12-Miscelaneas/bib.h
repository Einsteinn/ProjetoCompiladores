#define SYMTBL_SZ 1000

#define KWLIST_SZ 9

#define MAXTOKEN 16

int lblcount; /* indica o rótulo atual */

/* tabela de símbolos */

char *symtbl[SYMTBL_SZ];

char symtype[SYMTBL_SZ];

int nsym; /* número de entradas atuais na tabela de símbolos */

/* códigos e lista de palavras-chave */

//char kwcode[KWLIST_SZ+1] = "ileweRWve";

/*char *kwlist[KWLIST_SZ] = {"IF", "ELSE", "ENDIF", "WHILE", "ENDWHILE",
                                                  "READ", "WRITE", "VAR", "END"};*/

char look; /* O caracter lido "antecipadamente" (lookahead) */

char token; /* código do token atual */

char value[MAXTOKEN+1]; /* texto do token atual */

/* PROTÓTIPOS */

/* rotinas utilitárias */
void init();
void nextchar(); /************/ void nextchar_x();
void error(char *s);
void fatal(char *s);
void expected(char *s);
void undefined(char *name);
void duplicated(char *name);
void checkident();

/* reconhecedores */
int isaddop(char c);
int ismulop(char c);
int isorop(char c);
int isrelop(char c);

/* tratamento de símbolos */
int lookup(char *s, char *list[], int size);
int locate(char *name);
int intable(char *name);
void checktable(char *name);
void addsymbol(char *name, char type);

/* analisador léxico */
void skipwhite();
void getname();
void getnum();
void getop();
void nexttoken();
void scan();
void matchstring(char *s);
void skipcomment();/**/

/* rótulos */
int newlabel();

/* rotinas de geração de código */
void asm_clear();
void asm_negative();
void asm_loadconst(char *name);
void asm_loadvar(char *name);
void asm_push();
void asm_popadd();
void asm_popsub();
void asm_popmul();
void asm_popdiv();
void asm_store(char *name);
void asm_not();
void asm_popand();
void asm_popor();
void asm_popxor();
void asm_popcompare();
void asm_relop(char op);
void asm_jmp(int label);
void asm_jmpfalse(int label);
void asm_read();
void asm_write();
void header();
void prolog();
void epilog();
void allocvar(char *name, int value);

/* rotinas do analisador sintático */

/* expressões aritméticas */
void factor();
void multiply();
void divide();
void term();
void add();
void subtract();
void expression();
void semicolon();/**/

/* expressões booleanas e relações */
void relation();
void notfactor();
void boolterm();
void boolor();
void boolxor();
void boolexpression();

/* bloco, estruturas de controle e comandos */
void assignment();
void doif();
void dowhile();
void readvar();
void doread();
void writevar();
void dowrite();
void block();
void statement(); /**/

/* declarações */
void decl();
void topdecls();
