#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Errhandler_get(MPI_Comm comm, MPI_Errhandler *errhandler) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ERRHANDLER_GET,mpi_errhandler_get,(MPI_Comm *comm,MPI_Errhandler **errhandler, FTN_INT *ierr),( comm, errhandler,ierr)){

 /* *ierr=MPI_Errhandler_get(c_comm,*c_errhandler);/*

}

