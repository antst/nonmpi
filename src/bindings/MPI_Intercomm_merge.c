#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Intercomm_merge(MPI_Comm intercomm, int high, MPI_Comm *newintracomm) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_INTERCOMM_MERGE,mpi_intercomm_merge,(MPI_Comm *intercomm,int *high,MPI_Comm **newintracomm, FTN_INT *ierr),( intercomm, high, newintracomm,ierr)){

 /* *ierr=MPI_Intercomm_merge(c_intercomm,c_high,*c_newintracomm);*/

}


