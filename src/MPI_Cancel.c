#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Cancel(MPI_Request *request) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_CANCEL,mpi_cancel,(MPI_Request **request, FTN_INT *ierr),( request,ierr)){

 /* *ierr=MPI_Cancel(*c_request);*/

}


