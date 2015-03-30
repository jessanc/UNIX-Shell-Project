linux :
	bison -dy unix.y 
	flex unix.l
	gcc lex.yy.c y.tab.c
	./a.out
windows:
	yacc -dy unix.y 
	lex unix.l
	gcc lex.yy.c y.tab.c
	a.exe
	
clean:
	rm mainc.o
