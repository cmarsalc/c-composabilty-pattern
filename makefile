CC = gcc
SRC_FILES = $(shell find -name "*.c")
INC_FILES = $(shell find -name "*.h")
INC_DIRS = $(shell find -type d)
INC_FLAGS = $(INC_DIRS:%=-I%)
OBJ = $(SRC_FILES:.c=.o)

%.o: %.c
	$(CC) -c $(CFLAGS) $(INC_FLAGS) $< -o $@

test: $(OBJ)
	$(CC) $^ -o $@

clean:
	rm -f $(OBJ)
	rm -f test.exe

