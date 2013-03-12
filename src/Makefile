LIB= ../lib/libmpi.a
OBJ= wtime.o

.PHONY: bindings utils

lib: bindings utils

include ../make.sys

clean:
	(cd bindings && make clean)
	$(RM) -f *.o *.mod *.MOD *.lst $(LIB)

bindings:
	(cd bindings && make lib)

utils: $(OBJ)
	$(AR) $(LIB) $?
	$(RANLIB) $(LIB)

.SUFFIXES :
.SUFFIXES : .o .F90 .f .c
    
.F90.o:
	$(F90) $(OPTS) -c $<
.f.o:
	$(F77) $(OPTS) -c $*.f
.c.o:
	$(CC) $(OPTS) -I. -c $*.c
