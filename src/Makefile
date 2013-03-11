LIB= ../lib/libnonmpi.a
OBJ= wtime.o

all: $(LIB)

include ../make.sys

clean:
	$(RM) *.o *.mod *.MOD *.lst $(LIB)

$(LIB): $(OBJ)
	$(AR) $@ $?
	$(RANLIB) $@ 

.SUFFIXES :
.SUFFIXES : .o .F90 .f .c
    
.F90.o:
	$(F90) $(OPTS) -c $<
.f.o:
	$(F77) $(OPTS) -c $*.f
.c.o:
	$(CC) $(OPTS) -I. -c $*.c
