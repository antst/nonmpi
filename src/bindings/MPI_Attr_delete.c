#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Attr_delete(MPI_Comm comm, int keyval) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ATTR_DELETE,mpi_attr_delete,(MPI_Comm *comm,int *keyval, FTN_INT *ierr),( comm, keyval,ierr)){

 /* *ierr=MPI_Attr_delete(c_comm,c_keyval);/*

}

