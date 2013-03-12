#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Issend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ISSEND,mpi_issend,(void **buf,int *count,MPI_Datatype *datatype,int *dest,int *tag,MPI_Comm *comm,MPI_Request **request, FTN_INT *ierr),( buf, count, datatype, dest, tag, comm, request,ierr)){

 /* *ierr=MPI_Issend(*c_buf,c_count,c_datatype,c_dest,c_tag,c_comm,*c_request);/*

}

