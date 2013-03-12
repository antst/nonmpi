#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Group_rank(MPI_Group group, int *rank) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GROUP_RANK,mpi_group_rank,(MPI_Group *group,int **rank, FTN_INT *ierr),( group, rank,ierr)){

 /* *ierr=MPI_Group_rank(c_group,*c_rank);*/

}


