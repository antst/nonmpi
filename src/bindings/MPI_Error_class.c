#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Error_class(int errorcode, int *errorclass) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ERROR_CLASS,mpi_error_class,(int *errorcode,int **errorclass, FTN_INT *ierr),( errorcode, errorclass,ierr)){

 /* *ierr=MPI_Error_class(c_errorcode,*c_errorclass);/*

}

