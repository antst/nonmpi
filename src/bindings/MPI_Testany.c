#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Testany(int count, MPI_Request *array_of_requests, int *index, int *flag, MPI_Status *status) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TESTANY,mpi_testany,(int *count,MPI_Request **array_of_requests,int **index,int **flag,MPI_Status **status, FTN_INT *ierr),( count, array_of_requests, index, flag, status,ierr)){

 /* *ierr=MPI_Testany(c_count,*c_array_of_requests,*c_index,*c_flag,*c_status);/*

}

