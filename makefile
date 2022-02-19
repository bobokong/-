CC=gcc

# -MM -MMD -MP 
CFLAGS=-g -O2 -Iinclude -Iinclude/algorithm -std=gnu11 -Wno-unused-result -MMD -MP
# -std=c++17 
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

includes = $(wildcard include/*.h)
sources=LAB2A.c LAB2B.c LAB2C.c LAB3A.c LAB3B.c LAB3C.c \
	LAB4.c LAB5.c LAB6.c LAB7A.c LAB8A.c LAB9A.c \
	LABW1.c LABW2.c LABW3.c

SOURCES=$(patsubst %,$(IDIR)/%, $(sources))
OBJS=$(patsubst %.c,$(ODIR)/%.exe, $(sources))
# OBJS = $(patsubst %,$(ODIR)/%, $(_OBJS))

all: makedir main 

main: $(OBJS) build/LAB1.exe

# 自动处理头文件的依赖关系
DEPENDS := $(patsubst %.exe, %.d, $(OBJS))
-include $(DEPENDS)
# <https://stackoverflow.com/questions/52034997/how-to-make-makefile-recompile-when-a-header-file-is-changed>

# $(OBJS): 
$(ODIR)/%.exe: $(IDIR)/%.c makefile
	$(CC) $(CFLAGS) $< -o $@

build/LAB1.exe: src/LAB1.c build/Queue.o
	$(CC) $(CFLAGS) $^ -o $@

build/Queue.o: include/algorithm/Queue.c 
	$(CC) $(CFLAGS) -c $< -o $@

# %.o: %.cpp Makefile
# 	$(CXX) $(WARNING) $(CXXFLAGS) -MMD -MP -c $< -o $@

makedir:
	@mkdir -p $(ODIR)
# @echo $(DEPENDS)
# $(ODIR)/%: $(IDIR)/%.c
# 	$(CC) $(CFLAGS) $< -o $@ 

# $(OBJS): $(SOURCES)
# 	$(CC) $(CFLAGS) -o $@ $<

clean:
	@rm *.exe build/*.exe build/*.d src/*.exe $(OBJS) -f
