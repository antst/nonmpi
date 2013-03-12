#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Op_free( MPI_Op *op) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_OP_FREE,mpi_op_free,( MPI_Op *op, FTN_INT *ierr),( op,ierr)){

 /* *ierr=MPI_Op_free(******c_op);*/

}


