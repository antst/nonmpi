#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Ssend_init(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm, MPI_Request *request) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_SSEND_INIT,mpi_ssend_init,(void **buf,int *count,MPI_Datatype *datatype,int *dest,int *tag,MPI_Comm *comm,MPI_Request **request, FTN_INT *ierr),( buf, count, datatype, dest, tag, comm, request,ierr)){

 /* *ierr=MPI_Ssend_init(*c_buf,c_count,c_datatype,c_dest,c_tag,c_comm,*c_request);*/

}


