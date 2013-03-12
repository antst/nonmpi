#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Comm_create(MPI_Comm comm, MPI_Group group, MPI_Comm *newcomm) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_COMM_CREATE,mpi_comm_create,(MPI_Comm *comm,MPI_Group *group,MPI_Comm **newcomm, FTN_INT *ierr),( comm, group, newcomm,ierr)){

 /* *ierr=MPI_Comm_create(c_comm,c_group,*c_newcomm);/*

}

