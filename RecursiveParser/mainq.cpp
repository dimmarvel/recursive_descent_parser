#include "Parser.h"
int main(int argc,char** argv) {
	setlocale(LC_ALL, "RUS");
	parser(argv[1] + '\0');
	system("pause");
	return 0;
}