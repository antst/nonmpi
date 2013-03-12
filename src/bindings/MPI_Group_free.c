#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Group_free(MPI_Group *group) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GROUP_FREE,mpi_group_free,(MPI_Group **group, FTN_INT *ierr),( group,ierr)){

 /* *ierr=MPI_Group_free(*c_group);*/

}


