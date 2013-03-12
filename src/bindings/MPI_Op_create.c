#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Op_create(MPI_User_function *function, int commute, MPI_Op *op) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_OP_CREATE,mpi_op_create,(MPI_User_function **function,int *commute,MPI_Op **op, FTN_INT *ierr),( function, commute, op,ierr)){

 /* *ierr=MPI_Op_create(*c_function,c_commute,*c_op);*/

}


