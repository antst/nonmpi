#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Send_init(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_SEND_INIT,mpi_send_init,(void **buf,int *count,MPI_Datatype *datatype,int *dest,int *tag,MPI_Comm *comm,MPI_Request **request, FTN_INT *ierr),( buf, count, datatype, dest, tag, comm, request,ierr)){

 /* *ierr=MPI_Send_init(*c_buf,c_count,c_datatype,c_dest,c_tag,c_comm,*c_request);/*

}

