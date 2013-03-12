#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Request_free(MPI_Request *request) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_REQUEST_FREE,mpi_request_free,(MPI_Request **request, FTN_INT *ierr),( request,ierr)){

 /* *ierr=MPI_Request_free(*c_request);/*

}

