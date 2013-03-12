#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Errhandler_free(MPI_Errhandler *errhandler) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ERRHANDLER_FREE,mpi_errhandler_free,(MPI_Errhandler **errhandler, FTN_INT *ierr),( errhandler,ierr)){

 /* *ierr=MPI_Errhandler_free(*c_errhandler);*/

}


