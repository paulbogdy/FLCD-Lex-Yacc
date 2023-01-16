%{
#include <stdio.h>
#include <stdlib.h>
#define YYDEBUG 1
%}

%token SE 
%token GE 
%token AND 
%token OR 
%token EQ 
%token DIF 
%token PLUS
%token MINUS
%token MUL
%token DIV 
%token MOD 
%token ASSIGN 
%token SM 
%token GR 

%token COLON 
%token COMMA
%token OPEN
%token CLOSED
%token OPENSQARED
%token CLOSEDSQARED
%token OPENCURLY
%token CLOSEDCURLY

%token IF
%token ELSE
%token WHILE
%token FOR
%token INT
%token CHAR
%token BOOL
%token FUNC
%token MASTER
%token NONE
%token MUT
%token READ
%token WRITE

%token ID
%token NUM
%token CHARACTER
%token TRUE
%token FALSE

%start program

%%

program: FUNC MASTER OPEN CLOSED COLON NONE OPENCURLY stmtlist CLOSEDCURLY {
            printf("program -> func master(): None { stmtlist }\n");
       };
stmtlist: stmt { printf("stmtlist -> stmt\n"); }
        | stmt stmtlist { printf("stmtlist -> stmt \\n stmtlist"); };
stmt: simplestmt { printf("stmt -> simplestmt\n"); }
    | structstmt { printf("stmt -> structstmt\n"); };
simplestmt: decl { printf("simplestmt -> decl\n"); }
          | assigndecl { printf("simplestmt -> assigndecl\n"); }
          | constdecl { printf("simplestmt -> constdecl\n"); }
          | assignment { printf("simplestmt -> assignment\n"); }
          | readstmt { printf("simplestmt -> readstmt\n"); }
          | writestmt { printf("simplestmt -> writestmt\n"); };
readstmt: READ OPEN expression CLOSED { printf("read(expression)\n"); };
writestmt: WRITE OPEN expression CLOSED { printf("write(expression)\n"); };
structstmt: whilestmt { printf("structstmt -> whilestmt\n"); }
          | forstmt { printf("structstmt -> forstmt\n"); }
          | ifstmt { printf("structstmt -> ifstmt\n"); };
whilestmt: WHILE OPEN logicexpr CLOSED OPENCURLY stmtlist CLOSEDCURLY {
            printf("whilestmt -> while(logicexpr) -> { stmtlist }\n"); 
         };
forstmt: FOR OPEN assigndecl COMMA logicexpr COMMA assignment CLOSED OPENCURLY stmtlist CLOSEDCURLY { printf("forstmt -> for(assigndecl, logicexpr, assignment) { stmtlist }\n"); };
ifstmt: IF OPEN logicexpr CLOSED OPENCURLY stmtlist CLOSEDCURLY {
        printf("ifstmt -> if(logicexpr) { stmtlist }\n"); }
      | IF OPEN logicexpr CLOSED OPENCURLY stmtlist CLOSEDCURLY ELSE OPENCURLY stmtlist CLOSEDCURLY { printf("ifstmt -> if(logicexpr) { stmtlist } else { stmtlist }\n"); };
decl: MUT ID COLON type { printf("decl -> mut identifier: type\n"); }; 
assigndecl: MUT constdecl { printf("assigndecl -> mut constdecl\n"); };
constdecl: ID COLON type ASSIGN arithexpr { printf("constdecl -> identifier: type = arithexpression\n"); };
assignment: var ASSIGN arithexpr { printf("assignment -> identifer = arithexpression\n"); };
expression: logicexpr { printf("expression -> logicexpr\n"); }
          | arithexpr { printf("expression -> arithexpr\n"); };
logicexpr: OPEN logicexpr CLOSED AND OPEN logicexpr CLOSED { printf("logicexpr -> logicexpr & logicexpr\n"); }
         | OPEN logicexpr CLOSED OR OPEN logicexpr CLOSED { printf("logicexpr -> logicexpr | logicexpr\n"); }
         | arithexpr SM arithexpr { printf("logicexpr -> arithexpr < arithexpr\n"); }
         | arithexpr GR arithexpr { printf("logicexpr -> arithexpr > arithexpr\n"); }
         | arithexpr EQ arithexpr { printf("logicexpr -> arithexpr == arithexpr\n"); }
         | arithexpr SE arithexpr { printf("logicexpr -> arithexpr <= arithexpr\n"); }
         | arithexpr GE arithexpr { printf("logicexpr -> arithexpr >= arithexpr\n"); }
         | arithexpr DIF arithexpr { printf("logicexpr -> arithexpr != arithexpr\n"); }
arithexpr: var { printf("arithexpr -> var\n"); }
         | NUM { printf("arithexpr -> constint\n"); }
         | CHARACTER { printf("arithexpr -> constchar\n"); }
         | OPEN arithexpr PLUS arithexpr CLOSED { printf("logicexpr -> arithexpr + arithexpr\n"); }
         | OPEN arithexpr MINUS arithexpr CLOSED { printf("logicexpr -> arithexpr - arithexpr\n"); }
         | OPEN arithexpr MUL arithexpr CLOSED { printf("logicexpr -> arithexpr * arithexpr\n"); }
         | OPEN arithexpr DIV arithexpr CLOSED { printf("logicexpr -> arithexpr / arithexpr\n"); }
         | OPEN arithexpr MOD arithexpr CLOSED { printf("logicexpr -> arithexpr \% arithexpr\n"); }
var: ID { printf("var -> ID\n"); }
   | var OPENSQARED arithexpr CLOSEDSQARED { printf("var -> var[arithexpr]\n"); };
type: INT { printf("type -> int\n"); }
    | CHAR { printf("type -> char\n"); }
    | type OPENSQARED NUM CLOSEDSQARED { printf("type -> array\n"); };

%%

extern FILE *yyin;

int yyerror(char *s)
{	
    printf("%s\n", s);
    return 1;
}

int main(int argc, char **argv)
{
	if(argc>1) yyin =  fopen(argv[1],"r");
	if(!yyparse()) fprintf(stderr, "\tOK\n");

    return 0;
} 
