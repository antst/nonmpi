include ../make.sys
include obj.lst
LIB=../lib/libmpi.a

lib: $(OBJ_LST)
	$(AR)  $(LIB) $(OBJ_LST)
	$(RANLIB) $(LIB)

.SUFFIXES : .o .f .c
    
.f.o:
	$(F77) $(OPTS) -c $*.f
.c.o:
	$(CC)  $(OPTS) -I. -I../include -c $*.c
	
clean:
	@$(RM) -f $(OBJ_LST)

