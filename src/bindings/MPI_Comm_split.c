#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Comm_split(MPI_Comm comm, int color, int key, MPI_Comm *newcomm) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_COMM_SPLIT,mpi_comm_split,(MPI_Comm *comm,int *color,int *key,MPI_Comm **newcomm, FTN_INT *ierr),( comm, color, key, newcomm,ierr)){

 /* *ierr=MPI_Comm_split(c_comm,c_color,c_key,*c_newcomm);/*

}

