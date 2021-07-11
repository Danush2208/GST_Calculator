
PROJECT_NAME = GST_Calculator

BUILD = build


SRC = main.c\
src/zero.c\
src/five.c\
src/twelve.c\
src/eighteen.c\
src/twentyeight.c\
src/license.c\
src/menu.c

TEST_SRC = src/zero.c\
src/five.c\
src/twelve.c\
src/eighteen.c\
src/twentyeight.c\
src/license.c\
src/menu.c\
test/test_calculator_operations.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

INC	= -Iinc\
-Iunity\


PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
#DOCUMENTATION_OUTPUT = documentation/html

$(PROJECT_NAME):all

.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

coverageCheck:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

$(BUILD):
	mkdir build