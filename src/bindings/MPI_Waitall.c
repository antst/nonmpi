#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Waitall(int count, MPI_Request *array_of_requests, MPI_Status *array_of_statuses) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_WAITALL,mpi_waitall,(int *count,MPI_Request **array_of_requests,MPI_Status **array_of_statuses, FTN_INT *ierr),( count, array_of_requests, array_of_statuses,ierr)){

 /* *ierr=MPI_Waitall(c_count,*c_array_of_requests,*c_array_of_statuses);/*

}

