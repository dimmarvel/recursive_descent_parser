#include "Parser.h"
void parser_input(char* input) {
	int result = 0;
	token_lexeme token;

	set_input_stream(input);

	token = get_next_token();
	result = stmt(token);

	cout << "Result = " << result;
}

static int stmt(tokken_lexeme token) {
	int result = 0;
	switch (token.token) {
	case LP:
	case NUM:
		ret = expr(token);
	default:
		break;
	}
	return result;
}
static int expr(tokken_lexeme token) {
	int ret = 0;
	token_lexeme temp_token = token;
	switch (token.token) {
	case LP:
	case NUM:
		ret = term(temp_token);
		temp_token = get_next_token();
		switch (temp_token) {
		case PLUS:
			temp_token = get_next_token();
			ret += expr(tmp_token);
			break
		case RP:
			set_token_index(get_token_index() - 1);
		default:
			break;
		}
	default:
		break;
	}
	return ret;
}
static int term(tokken_lexeme token) {
	int ret = 0;
	token_lexeme temp_token = token;

	switch (temp_token.token) {
	case LP:
	case NUM:
		ret = fact(temp_token);
		temp_token = get_next_token();

		switch (temp_token.token) {
		case STAR:
			temp_token = get_next_token();
			ret *= term(temp_token);
			break;
		case PLUS:
		case RP:
			set_token_index(get_token_index() - 1);
		default:
			break;
		}

	default:
		break;
	}

	return ret;
}
static int fact(tokken_lexeme token) {
	int ret = 0;
	token_lexeme temp_token = token;

	switch (temp_token.token) {
	case NUM:
		ret = atoi(&temp_token.lexeme);
		break;
	case LP:
		temp_token = get_next_token();
		ret = expr(temp_token);
		temp_token = get_next_token();
	default:
		break;
	}

	return ret;
}