#ifndef _LEX_ANALYSER_H_
#define _LEX_ANALYSER_H_

#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;
typedef unsigned int uint;

enum TOKENS = {EOI, NUM, PLUS, STAR, LP, RP, UNKNOWN}
typedef struct token_lexeme {
	TOKENS token;
	char lexeme;
};
void set_input_stream(char* input_str);
void set_token_index(uint index);
uint get_token_index(void);
token_lexeme get_next_token(void);
#endif