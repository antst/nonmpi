#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Error_string(int errorcode, char *string, int *resultlen) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ERROR_STRING,mpi_error_string,(int *errorcode,char **string,int **resultlen, FTN_INT *ierr),( errorcode, string, resultlen,ierr)){

 /* *ierr=MPI_Error_string(c_errorcode,*c_string,*c_resultlen);/*

}

