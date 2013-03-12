#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Testall(int count, MPI_Request *array_of_requests, int *flag, MPI_Status *array_of_statuses) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TESTALL,mpi_testall,(int *count,MPI_Request **array_of_requests,int **flag,MPI_Status **array_of_statuses, FTN_INT *ierr),( count, array_of_requests, flag, array_of_statuses,ierr)){

 /* *ierr=MPI_Testall(c_count,*c_array_of_requests,*c_flag,*c_array_of_statuses);*/

}


