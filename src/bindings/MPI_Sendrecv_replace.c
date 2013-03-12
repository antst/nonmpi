#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Sendrecv_replace(void *buf, int count, MPI_Datatype datatype, int dest, int sendtag, int source, int recvtag, MPI_Comm comm, MPI_Status *status) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_SENDRECV_REPLACE,mpi_sendrecv_replace,(void **buf,int *count,MPI_Datatype *datatype,int *dest,int *sendtag,int *source,int *recvtag,MPI_Comm *comm,MPI_Status **status, FTN_INT *ierr),( buf, count, datatype, dest, sendtag, source, recvtag, comm, status,ierr)){

 /* *ierr=MPI_Sendrecv_replace(*c_buf,c_count,c_datatype,c_dest,c_sendtag,c_source,c_recvtag,c_comm,*c_status);/*

}

