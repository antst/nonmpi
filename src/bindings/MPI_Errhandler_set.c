#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Errhandler_set(MPI_Comm comm, MPI_Errhandler errhandler) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ERRHANDLER_SET,mpi_errhandler_set,(MPI_Comm *comm,MPI_Errhandler *errhandler, FTN_INT *ierr),( comm, errhandler,ierr)){

 /* *ierr=MPI_Errhandler_set(c_comm,c_errhandler);/*

}

