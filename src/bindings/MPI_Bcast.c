#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Bcast(void *buffer, int count, MPI_Datatype datatype, int root, MPI_Comm comm ) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_BCAST,mpi_bcast,(void **buffer,int *count,MPI_Datatype *datatype,int *root,MPI_Comm *comm , FTN_INT *ierr),( buffer, count, datatype, root, comm ,ierr)){

 /* *ierr=MPI_Bcast(*c_buffer,c_count,c_datatype,c_root,c_comm );/*

}

