#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Test(MPI_Request *request, int *flag, MPI_Status *status) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TEST,mpi_test,(MPI_Request **request,int **flag,MPI_Status **status, FTN_INT *ierr),( request, flag, status,ierr)){

 /* *ierr=MPI_Test(*c_request,*c_flag,*c_status);*/

}


