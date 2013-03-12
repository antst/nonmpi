#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Irecv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Request *request) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_IRECV,mpi_irecv,(void **buf,int *count,MPI_Datatype *datatype,int *source,int *tag,MPI_Comm *comm,MPI_Request **request, FTN_INT *ierr),( buf, count, datatype, source, tag, comm, request,ierr)){

 /* *ierr=MPI_Irecv(*c_buf,c_count,c_datatype,c_source,c_tag,c_comm,*c_request);/*

}

