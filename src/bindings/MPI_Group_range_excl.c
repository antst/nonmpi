#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Group_range_excl(MPI_Group group, int n, int ranges[][3], MPI_Group *newgroup) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GROUP_RANGE_EXCL,mpi_group_range_excl,(MPI_Group *group,int *n,int *ranges[][3],MPI_Group **newgroup, FTN_INT *ierr),( group, n, ranges, newgroup,ierr)){

 /* *ierr=MPI_Group_range_excl(c_group,c_n,c_ranges[][3],*c_newgroup);*/

}


