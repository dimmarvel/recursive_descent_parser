#ifndef _PARSER_H_
#define _PARSER_H_
#include "lex_analyzer.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void parser_input(char*input);
static int stmt(lex_analyzer token);
static int expr(lex_analyzer token);
static int term(lex_analyzer token);
static int fact(lex_analyzer token);
#endif