#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Initialized(int *flag) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_INITIALIZED,mpi_initialized,(int **flag, FTN_INT *ierr),( flag,ierr)){

 /* *ierr=MPI_Initialized(*c_flag);*/

}


