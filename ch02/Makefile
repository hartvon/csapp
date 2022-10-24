SRC := $(wildcard *.c)
TAR := $(SRC:%.c=%)

all: $(TAR)

%: %.c
	$(CC) -o $@ $< -Wall

.PHONY: clean
clean:
	rm $(TAR)