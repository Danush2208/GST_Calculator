# Target name : dependencies
#<TAB> command 

SRC = main.c src/zero.c src/five.c src/twelve.c src/eighteen.c src/twentyeight.c src/license.c src/menu.c 
INC = inc

target : $(SRC) $(INC)
	gcc $(SRC) -I$(INC) -o new.out

run : target
	.\new.out

clean :
	rm new.out
