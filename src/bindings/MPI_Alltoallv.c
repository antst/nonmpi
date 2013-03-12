#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Alltoallv(void *sendbuf, int *sendcounts, int *sdispls, MPI_Datatype sendtype, void *recvbuf, int *recvcounts, int *rdispls, MPI_Datatype recvtype, MPI_Comm comm) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ALLTOALLV,mpi_alltoallv,(void **sendbuf,int **sendcounts,int **sdispls,MPI_Datatype *sendtype,void **recvbuf,int **recvcounts,int **rdispls,MPI_Datatype *recvtype,MPI_Comm *comm, FTN_INT *ierr),( sendbuf, sendcounts, sdispls, sendtype, recvbuf, recvcounts, rdispls, recvtype, comm,ierr)){

 /* *ierr=MPI_Alltoallv(*c_sendbuf,*c_sendcounts,*c_sdispls,c_sendtype,*c_recvbuf,*c_recvcounts,*c_rdispls,c_recvtype,c_comm);*/

}


