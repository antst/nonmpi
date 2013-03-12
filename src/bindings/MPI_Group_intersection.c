#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Group_intersection(MPI_Group group1, MPI_Group group2, MPI_Group *newgroup) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GROUP_INTERSECTION,mpi_group_intersection,(MPI_Group *group1,MPI_Group *group2,MPI_Group **newgroup, FTN_INT *ierr),( group1, group2, newgroup,ierr)){

 /* *ierr=MPI_Group_intersection(c_group1,c_group2,*c_newgroup);/*

}

