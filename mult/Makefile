CC=gcc
CFLAGS=-I$(IDIR)

IDIR =include
SRCDIR=src
ODIR=compiled
LDIR =lib
CDIR=compiled

LIBS=-lm

_DEPS = Functions.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = Main.o Functions.o
OBJ = $(patsubst %,$(SRCDIR)/$(ODIR)/%,$(_OBJ))


$(SRCDIR)/$(ODIR)/%.o: $(SRCDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(CDIR)/Main: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 