
TEST_PROJ_NAME = GST_Calculator
BUILD_DIR = Build
CFLAGS = -Wall -g

SRC = main.c\
      src/*.c

INC = inc


$(BUILD_DIR):
	mkdir $(BUILD_DIR)

INC_TEST = -Iinc -Iunity


OUTPUT = $(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)

TEST_SRC = src/*c\
test/test_calculator_operations.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD_DIR)/Test_$(TEST_PROJ_NAME).$(EXEC)

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

all : $(SRC) $(BUILD_DIR)
	gcc -I $(INC) $(SRC) -o $(call FixPath,$(OUTPUT)) 

run : all
	$(call FixPath,$(OUTPUT))

clean :
	$(RM) $(call FixPath,$(BUILD_DIR)/*)

valgrind :
	valgrind $(call FixPath,$(TEST_OUTPUT))

coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(SRC)
 
test:$(BUILD_DIR)
	gcc $(TEST_SRC) $(INC_TEST) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)
