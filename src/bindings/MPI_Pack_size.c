#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Pack_size(int incount, MPI_Datatype datatype, MPI_Comm comm, int *size) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_PACK_SIZE,mpi_pack_size,(int *incount,MPI_Datatype *datatype,MPI_Comm *comm,int **size, FTN_INT *ierr),( incount, datatype, comm, size,ierr)){

 /* *ierr=MPI_Pack_size(c_incount,c_datatype,c_comm,*c_size);/*

}

