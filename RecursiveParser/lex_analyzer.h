#ifndef _LEX_ANALYSER_H_
#define _LEX_ANALYSER_H_
#include<stdlib.h>
#include<string>
#include<iostream>

using namespace std;

typedef unsigned int uint;

enum TOKENS { EOI, PLUS, NUM, STAR, LP, RP, UNKNOWN };

typedef struct token_lexeme {
	enum TOKENS token;
	char lexeme;
} token_lexeme;

uint get_token_index(void);
void set_token_index(uint index);
void set_input_stream(char* input);
token_lexeme get_next_token(void);

#endif