#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Keyval_create(MPI_Copy_function *copy_fn, MPI_Delete_function *delete_fn, int *keyval, void *extra_state) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_KEYVAL_CREATE,mpi_keyval_create,(MPI_Copy_function **copy_fn,MPI_Delete_function **delete_fn,int **keyval,void **extra_state, FTN_INT *ierr),( copy_fn, delete_fn, keyval, extra_state,ierr)){

 /* *ierr=MPI_Keyval_create(*c_copy_fn,*c_delete_fn,*c_keyval,*c_extra_state);/*

}

