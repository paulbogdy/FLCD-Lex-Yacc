#ifndef _Y_TAB_H
#define _Y_TAB_H

#define PLUS 270
#define MINUS 271
#define DIV 272
#define ASSIGN 273
#define SM 274
#define GR 275
#define SE 276
#define GE 277
#define AND 278
#define OR 279
#define EQ 280
#define DIF 281
#define MOD 282
#define MUL 283
#define DECL 284

#define IF 300
#define ELSE 301
#define WHILE 302
#define FOR 303
#define INT 304
#define ID 306
#define NUM 307
#define FUNC 308
#define MASTER 309
#define NONE 310
#define CHAR 313
#define MUT 314
#define BOOL 315
#define READ 316
#define WRITE 317
#define CHARACTER 318

int yylex(void);
typedef union {
    char *string;
    int integer;
    char character;
} yylType;
#endif
