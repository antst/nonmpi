#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Group_difference(MPI_Group group1, MPI_Group group2, MPI_Group *newgroup) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GROUP_DIFFERENCE,mpi_group_difference,(MPI_Group *group1,MPI_Group *group2,MPI_Group **newgroup, FTN_INT *ierr),( group1, group2, newgroup,ierr)){

 /* *ierr=MPI_Group_difference(c_group1,c_group2,*c_newgroup);/*

}

