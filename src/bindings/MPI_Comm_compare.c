#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Comm_compare(MPI_Comm comm1,MPI_Comm comm2, int *result) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_COMM_COMPARE,mpi_comm_compare,(MPI_Comm *comm1,MPI_Comm *comm2,int **result, FTN_INT *ierr),( comm1, comm2, result,ierr)){

 /* *ierr=MPI_Comm_compare(c_comm1,c_comm2,*c_result);*/

}


