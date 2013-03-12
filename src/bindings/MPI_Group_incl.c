#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Group_incl(MPI_Group group, int n, int *ranks, MPI_Group *newgroup) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GROUP_INCL,mpi_group_incl,(MPI_Group *group,int *n,int **ranks,MPI_Group **newgroup, FTN_INT *ierr),( group, n, ranks, newgroup,ierr)){

 /* *ierr=MPI_Group_incl(c_group,c_n,*c_ranks,*c_newgroup);/*

}

