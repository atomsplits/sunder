# Taken from https://github.com/Immediate-Mode-UI/Nuklear/blob/master/demo/x11_opengl3/Makefile

# Install
BIN = demo

# Compiler
CC ?= clang
DCC = gcc

# Flags
CFLAGS += -std=c89 -Wall -Wextra -pedantic -D_DEFAULT_SOURCE

SRC = main.c
OBJ = $(SRC:.c=.o)

# Modes
.PHONY: gcc
gcc: CC ?= gcc
gcc: $(BIN)

.PHONY: clang
clang: CC ?= clang
clang: $(BIN)

$(BIN):
	@mkdir -p bin
	rm -f bin/$(BIN) $(OBJS)
	$(CC) $(SRC) $(CFLAGS) -o bin/$(BIN) -lX11 -lm -lGL -lm -lGLU
