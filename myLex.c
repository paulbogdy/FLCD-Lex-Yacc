#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
extern int line_count;
int main(int argc, char *argv[]) // myLex.c
{
    extern FILE *yyin, *yyout;

    if(argc > 1) {
        yyin = fopen(argv[1], "r");
    }
    if(argc > 2) {
        yyout = fopen(argv[2], "w");
    }
    int s;

    while((s=yylex())) {
        switch(s) {
            case OPENCURLY:
                printf("<{>");
                break;
            case CLOSEDCURLY:
                printf("<}>");
                break;
            case OPENSQARED:
                printf("<[>");
                break;
            case CLOSEDSQARED:
                printf("<]>");
                break;
            case OPEN:
                printf("<(>");
                break;
            case CLOSED:
                printf("<)>");
                break;
            case COMMA:
                printf("<,>");
                break;
            case PLUS:
                printf("<+>");
                break;
            case MINUS:
                printf("<->");
                break;
            case DIV:
                printf("</>");
                break;
            case ASSIGN:
                printf("<=>");
                break;
            case SM:
                printf(" < ");
                break;
            case GR:
                printf(" > ");
                break;
            case SE:
                printf(" <= ");
                break;
            case GE:
                printf(" >= ");
                break;
            case AND:
                printf("<&>");
                break;
            case OR:
                printf("<|>");
                break;
            case EQ:
                printf("<==>");
                break;
            case DIF:
                printf("<!=>");
                break;
            case COLON:
                printf("<:>");
                break;
            case MOD:
                printf("<MOD>");
                break;
            case MUL:
                printf("<*>");
                break;
            case IF:
                printf("<if>");
                break;
            case ELSE:
                printf("<else>");
                break;
            case WHILE:
                printf("<while>");
                break;
            case FOR:
                printf("<for>");
                break;
            case INT:
                printf("<int>");
                break;
            case NUM:
                printf("<NUMBER>");
                break;
            case ID:
                printf("<IDENTIFIER>");
                break;
            case FUNC:
                printf("<func>");
                break;
            case MASTER:
                printf("<master>");
                break;
            case NONE:
                printf("<None>");
                break;
            case CHAR:
                printf("<char>");
                break;
            case CHARACTER:
                printf("<CHARACTER>");
                break;
            case READ:
                printf("<read>");
                break;
            case WRITE:
                printf("<write>");
                break;
            case BOOL:
                printf("<bool>");
                break;
            case MUT:
                printf("<mut>");
                break;
            default:
                printf("IDK WHAT this is, line %d", line_count);
                break;
        }
    }
    return 0;
}
