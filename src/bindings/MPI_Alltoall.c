#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Alltoall(void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, MPI_Comm comm) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ALLTOALL,mpi_alltoall,(void **sendbuf,int *sendcount,MPI_Datatype *sendtype,void **recvbuf,int *recvcount,MPI_Datatype *recvtype,MPI_Comm *comm, FTN_INT *ierr),( sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm,ierr)){

 /* *ierr=MPI_Alltoall(*c_sendbuf,c_sendcount,c_sendtype,*c_recvbuf,c_recvcount,c_recvtype,c_comm);/*

}

