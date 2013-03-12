#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Errhandler_create(MPI_Handler_function *function, MPI_Errhandler *errhandler) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ERRHANDLER_CREATE,mpi_errhandler_create,(MPI_Handler_function **function,MPI_Errhandler **errhandler, FTN_INT *ierr),( function, errhandler,ierr)){

 /* *ierr=MPI_Errhandler_create(*c_function,*c_errhandler);/*

}

