CC = clang
CFLAGS = -ansi -pedantic -Weverything -Werror
SOURCES = BitUnpacker.c cli.c CodeSet.c gif.c LZWExp.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = gif

.PHONY: clean test

all: gif

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rfv $(TARGET) *.o *.dSYM
