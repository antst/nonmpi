#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Reduce(void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op, int root, MPI_Comm comm) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_REDUCE,mpi_reduce,(void **sendbuf,void **recvbuf,int *count,MPI_Datatype *datatype,MPI_Op *op,int *root,MPI_Comm *comm, FTN_INT *ierr),( sendbuf, recvbuf, count, datatype, op, root, comm,ierr)){

 /* *ierr=MPI_Reduce(*c_sendbuf,*c_recvbuf,c_count,c_datatype,c_op,c_root,c_comm);/*

}

