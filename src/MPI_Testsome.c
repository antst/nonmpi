#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Testsome(int incount, MPI_Request *array_of_requests, int *outcount, int *array_of_indices, MPI_Status *array_of_statuses) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TESTSOME,mpi_testsome,(int *incount,MPI_Request **array_of_requests,int **outcount,int **array_of_indices,MPI_Status **array_of_statuses, FTN_INT *ierr),( incount, array_of_requests, outcount, array_of_indices, array_of_statuses,ierr)){

 /* *ierr=MPI_Testsome(c_incount,*c_array_of_requests,*c_outcount,*c_array_of_indices,*c_array_of_statuses);*/

}


