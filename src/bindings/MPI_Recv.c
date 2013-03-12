#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Recv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Status *status) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_RECV,mpi_recv,(void **buf,int *count,MPI_Datatype *datatype,int *source,int *tag,MPI_Comm *comm,MPI_Status **status, FTN_INT *ierr),( buf, count, datatype, source, tag, comm, status,ierr)){

 /* *ierr=MPI_Recv(*c_buf,c_count,c_datatype,c_source,c_tag,c_comm,*c_status);/*

}

