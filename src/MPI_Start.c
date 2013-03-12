#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Start(MPI_Request *request) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_START,mpi_start,(MPI_Request **request, FTN_INT *ierr),( request,ierr)){

 /* *ierr=MPI_Start(*c_request);*/

}


