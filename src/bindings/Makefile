include ../../make.sys
include obj.lst
LIB=../../../libmpi.a

lib: $(OBJ_LST)
	$(AR) $(OBJ_LST) $(LIB)

.SUFFIXES : .o .f .c
    
.f.o:
	$(F77) $(OPTS) -c $*.f
.c.o:
	$(CC) $(OPTS) -I. -I../ -c $*.c

