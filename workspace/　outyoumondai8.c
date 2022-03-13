//長文問題
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define STACK_SIZE 100
#define ERROR      (-1)
#define OK          0

typedef struct {
    char ope;   /*演算子*/
    char *exp;  /*数式*/
} TOKEN;

int stack [STACK_SIZE];
int sp = 0;

void Push(int value);
int Pop(void);
int EvalAddSub(TOKEN *token);
int EvalMulDiv(TOKEN *token);
void EvalValue(TOKEN *token);
void Parse(TOKEN *token);

void Calc(char *exp);

void Calc(char *exp)
{
    TOKEN token;

    printf("%s = ", exp);
    token.exp = exp;
    if (EvalAddSub(&token) != ERROR)
        printf("%d\n",　　　　　);
    else
        printf("ERROR\n");
}

int EvalAddsub(TOKEN *token)
{
    char ope;
    int value1,value2;

    if (EvalMulDiv(token) == -1)
    return ERROR;
    ope - token->ope;
    while (ope == '+' || ope == '-') {
        if (EvalMulDiv(token) == ERROR)
            return ERROR;
        value2 = Pop();
        value1 = Pop();
        switch (ope) {
          case '+':
            Push (value1 + value2);
            break;
          case '-':
            Push(value1 - value2);
            break;
        }
        ope = token->ope;
    }
    return OK;
}

int EvalMulDiv(TOKEN *token)
{
    char ope;
    int value1, value2;
    EvalValue(token);
    ope = token->ope;
    while (ope == '*' || ope == '/') {
        EvalValue(token);
        value2 = Pop();
        value1 = Pop();
        switch (ope) {
          case '*':
            Push (value1 * value2);
            break;
          case '/':
            if(　　　　　)
            return ERROR;       /*ゼロ乗算*/
            Push (value1 / value2);
            break;
        }
        ope = token->ope;
    }
    return OK;
}

void EvalValue(TOKEN *token)
{
    char buf[80];
    int i = 0;

    while(isspace(*token->exp))
        token->exp++;
    while (*token->exp != '\0'  && !isspace(*token->exp))
        　　　　　;
    buf[i] = '\0';
    　　　　　;
    Parse(token);
}

void Parse(TOKEN *token)
{
    while (isspace(*token->exp))
        token->exp++;
    token->ope = *token->exp++;
}

void Push(int value)
{
    　　　　　 = value;
}

int Pop(void)
{
    return stack[--sp];
}