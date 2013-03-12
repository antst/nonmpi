#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Recv_init(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Request *request) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_RECV_INIT,mpi_recv_init,(void **buf,int *count,MPI_Datatype *datatype,int *source,int *tag,MPI_Comm *comm,MPI_Request **request, FTN_INT *ierr),( buf, count, datatype, source, tag, comm, request,ierr)){

 /* *ierr=MPI_Recv_init(*c_buf,c_count,c_datatype,c_source,c_tag,c_comm,*c_request);*/

}


