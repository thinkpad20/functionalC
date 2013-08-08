YACC=bison
LEX=flex

all: parse

.c.o:
	$(CC) -c $<

parse: c99parser.o c99lexer.o main.c
	$(CC) -o parse c99parser.o c99lexer.o main.c

c99parser.c c99parser.h: c99parser.y
	$(YACC) -dt c99parser.y
	mv -f c99parser.tab.c c99parser.c
	mv -f c99parser.tab.h c99parser.h

c99lexer.c: c99lexer.l
	$(LEX) -t c99lexer.l >c99lexer.c

c99lexer.o: c99parser.h

clean:
	rm -f parse *.o
	rm -f c99lexer.c c99parser.c c99parser.h
