#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Group_union(MPI_Group group1, MPI_Group group2, MPI_Group *newgroup) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GROUP_UNION,mpi_group_union,(MPI_Group *group1,MPI_Group *group2,MPI_Group **newgroup, FTN_INT *ierr),( group1, group2, newgroup,ierr)){

 /* *ierr=MPI_Group_union(c_group1,c_group2,*c_newgroup);*/

}


