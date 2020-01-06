#ifndef _PARSER_H_
#define _PARSER_H_
#include "lex_analyzer.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void parser_input(char* input);
static int stmt(token_lexeme token);
static int expr(token_lexeme token);
static int term(token_lexeme token);
static int fact(token_lexeme token);
#endif