# Target name : dependencies
#<TAB> command 

SRC = start.c zero.c five.c twelve.c eighteen.c twentyeight.c license.c menu.c
INC = fun.h

target : $(SRC) $(INC)
	gcc $(SRC) -o new.exe

run : target
	.\new.exe 

clean :
	rm new.exe
