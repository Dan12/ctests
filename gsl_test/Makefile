CC=gcc
CFLAGS=-I$(IDIR) -I/usr/include

IDIR =include
SRCDIR=src
ODIR=compiled
LDIR =lib
CDIR=compiled

LIBS=-L/usr/lib -lgsl -lgslcblas -lm -lpng

_DEPS = GSLFuncs.h PNGFuncs.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = Main.o GSLFuncs.o PNGFuncs.o
OBJ = $(patsubst %,$(SRCDIR)/$(ODIR)/%,$(_OBJ))


$(SRCDIR)/$(ODIR)/%.o: $(SRCDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(CDIR)/Main: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 