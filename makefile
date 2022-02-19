CC=gcc

CFLAGS=-g -O2 -Iinclude -Wno-unused-result
# -lcurses
# `ncurses5-config --cflags --libs`

IDIR=src
#IDIR=src/untested
ODIR=build

# LAB2B.c 
#sources=ch2_a.c ch2_b.c ch2_c.c \
	#LAB3A.c LAB3B.c LAB3C.c \
	#LABW7.c \
	#LABW8.c

sources=LAB1.c LAB2A.c LAB2B.c LAB2C.c LAB3A.c LAB3B.c LAB3C.c \
	LAB4.c LAB5.c LAB6.c LAB7A.c LAB8A.c LAB9A.c \
	LABW1.c LABW2.c LABW3.c

SOURCES=$(patsubst %,$(IDIR)/%, $(sources))
OBJS=$(patsubst %.c,$(ODIR)/%.exe, $(sources))
# OBJS = $(patsubst %,$(ODIR)/%, $(_OBJS))

all: makedir main 

main: $(OBJS)

$(OBJS): $(ODIR)/%.exe: $(IDIR)/%.c
	$(CC) $< -o $@ $(CFLAGS)

makedir:
	mkdir -p $(ODIR)
# $(ODIR)/%: $(IDIR)/%.c
# 	$(CC) $(CFLAGS) $< -o $@ 

# $(OBJS): $(SOURCES)
# 	$(CC) $(CFLAGS) -o $@ $<

clean:
	@rm *.exe build/*.exe src/*.exe $(OBJS) -f
