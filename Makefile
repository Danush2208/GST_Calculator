main: main.o 
	gcc main.o -o main -l m

main.o: main.c
	gcc -c main.c