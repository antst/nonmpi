#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Unpack(void *inbuf, int insize, int *position, void *outbuf, int outcount, MPI_Datatype datatype, MPI_Comm comm) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_UNPACK,mpi_unpack,(void **inbuf,int *insize,int **position,void **outbuf,int *outcount,MPI_Datatype *datatype,MPI_Comm *comm, FTN_INT *ierr),( inbuf, insize, position, outbuf, outcount, datatype, comm,ierr)){

 /* *ierr=MPI_Unpack(*c_inbuf,c_insize,*c_position,*c_outbuf,c_outcount,c_datatype,c_comm);/*

}

