CC=gcc

CFLAGS=-g -O2

SRC=src
ODIR=build

sources=LAB2A.c LAB2B.c LAB2C.c

SOURCES=$(patsubst %,$(SRC)/%, $(sources))
OBJS=$(patsubst %.c,$(ODIR)/%, $(sources))
# OBJS = $(patsubst %,$(ODIR)/%, $(_OBJS))

main: $(OBJS)

$(OBJS): $(SOURCES)
	$(CC) $(CFLAGS) $< -o $@

clean:
	@rm build/*.exe src/*.exe $(OBJS) -f
