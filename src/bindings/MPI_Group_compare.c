#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Group_compare(MPI_Group group1,MPI_Group group2, int *result) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GROUP_COMPARE,mpi_group_compare,(MPI_Group *group1,MPI_Group *group2,int **result, FTN_INT *ierr),( group1, group2, result,ierr)){

 /* *ierr=MPI_Group_compare(c_group1,c_group2,*c_result);*/

}


