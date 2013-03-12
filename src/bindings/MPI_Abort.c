#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Abort(MPI_Comm comm, int errorcode) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ABORT,mpi_abort,(MPI_Comm *comm,int *errorcode, FTN_INT *ierr),( comm, errorcode,ierr)){

 /* *ierr=MPI_Abort(c_comm,c_errorcode);/*

}

