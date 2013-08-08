#include <stdio.h>
#include <stdlib.h>
#include "c99parser.h"

int main(int argc, char *argv[]) {
   yyparse();
   return 0;
}
