#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Reduce_scatter(void *sendbuf, void *recvbuf, int *recvcounts, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_REDUCE_SCATTER,mpi_reduce_scatter,(void **sendbuf,void **recvbuf,int **recvcounts,MPI_Datatype *datatype,MPI_Op *op,MPI_Comm *comm, FTN_INT *ierr),( sendbuf, recvbuf, recvcounts, datatype, op, comm,ierr)){

 /* *ierr=MPI_Reduce_scatter(*c_sendbuf,*c_recvbuf,*c_recvcounts,c_datatype,c_op,c_comm);*/

}


