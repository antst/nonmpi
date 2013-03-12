#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Group_translate_ranks(MPI_Group group1, int n, int *ranks1, MPI_Group group2, int *ranks2) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GROUP_TRANSLATE_RANKS,mpi_group_translate_ranks,(MPI_Group *group1,int *n,int **ranks1,MPI_Group *group2,int **ranks2, FTN_INT *ierr),( group1, n, ranks1, group2, ranks2,ierr)){

 /* *ierr=MPI_Group_translate_ranks(c_group1,c_n,*c_ranks1,c_group2,*c_ranks2);/*

}

