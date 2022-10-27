BIN := ./bin
SRC := $(wildcard *.c)
TAR := $(SRC:%.c=$(BIN)/%)

all: $(TAR)

$(BIN)/%: %.c
	$(CC) -o $@ $< -Wall

.PHONY: clean
clean:
	rm $(TAR)