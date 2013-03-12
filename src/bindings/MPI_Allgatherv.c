#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Allgatherv(void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int *recvcounts, int *displs, MPI_Datatype recvtype, MPI_Comm comm) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ALLGATHERV,mpi_allgatherv,(void **sendbuf,int *sendcount,MPI_Datatype *sendtype,void **recvbuf,int **recvcounts,int **displs,MPI_Datatype *recvtype,MPI_Comm *comm, FTN_INT *ierr),( sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, comm,ierr)){

 /* *ierr=MPI_Allgatherv(*c_sendbuf,c_sendcount,c_sendtype,*c_recvbuf,*c_recvcounts,*c_displs,c_recvtype,c_comm);/*

}

