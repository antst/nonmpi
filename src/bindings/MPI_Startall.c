#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Startall(int count, MPI_Request *array_of_requests) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_STARTALL,mpi_startall,(int *count,MPI_Request **array_of_requests, FTN_INT *ierr),( count, array_of_requests,ierr)){

 /* *ierr=MPI_Startall(c_count,*c_array_of_requests);*/

}


