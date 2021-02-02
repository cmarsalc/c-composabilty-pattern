CC = gcc
SRC_FILES = $(shell find -name "*.c")
INC_DIRS = $(shell find -name "*.h" | while read i; do dirname "$$i"; done | uniq)
INC_FLAGS = $(INC_DIRS:%=-I%)
OBJ = $(SRC_FILES:.c=.o)

%.o: %.c
	$(CC) -c $(CFLAGS) $(INC_FLAGS) $< -o $@

test: $(OBJ)
	$(CC) $^ -o $@

clean:
	rm -f $(OBJ)
	rm -f test.exe

