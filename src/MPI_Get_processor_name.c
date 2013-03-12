#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Get_processor_name(char *name, int *resultlen) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GET_PROCESSOR_NAME,mpi_get_processor_name,(char **name,int **resultlen, FTN_INT *ierr),( name, resultlen,ierr)){

 /* *ierr=MPI_Get_processor_name(*c_name,*c_resultlen);*/

}


