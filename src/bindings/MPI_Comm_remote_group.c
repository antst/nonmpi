#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Comm_remote_group(MPI_Comm comm, MPI_Group *group) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_COMM_REMOTE_GROUP,mpi_comm_remote_group,(MPI_Comm *comm,MPI_Group **group, FTN_INT *ierr),( comm, group,ierr)){

 /* *ierr=MPI_Comm_remote_group(c_comm,*c_group);/*

}

