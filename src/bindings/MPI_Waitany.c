#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Waitany(int count, MPI_Request *array_of_requests, int *index, MPI_Status *status) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_WAITANY,mpi_waitany,(int *count,MPI_Request **array_of_requests,int **index,MPI_Status **status, FTN_INT *ierr),( count, array_of_requests, index, status,ierr)){

 /* *ierr=MPI_Waitany(c_count,*c_array_of_requests,*c_index,*c_status);*/

}


