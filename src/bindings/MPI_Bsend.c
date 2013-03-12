#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Bsend(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_BSEND,mpi_bsend,(void **buf,int *count,MPI_Datatype *datatype,int *dest,int *tag,MPI_Comm *comm, FTN_INT *ierr),( buf, count, datatype, dest, tag, comm,ierr)){

 /* *ierr=MPI_Bsend(*c_buf,c_count,c_datatype,c_dest,c_tag,c_comm);*/

}


