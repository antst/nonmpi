#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Wait(MPI_Request *request, MPI_Status *status) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_WAIT,mpi_wait,(MPI_Request **request,MPI_Status **status, FTN_INT *ierr),( request, status,ierr)){

 /* *ierr=MPI_Wait(*c_request,*c_status);/*

}

