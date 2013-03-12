#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Group_size(MPI_Group group, int *size) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GROUP_SIZE,mpi_group_size,(MPI_Group *group,int **size, FTN_INT *ierr),( group, size,ierr)){

 /* *ierr=MPI_Group_size(c_group,*c_size);*/

}


