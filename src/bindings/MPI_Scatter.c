#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Scatter(void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_SCATTER,mpi_scatter,(void **sendbuf,int *sendcount,MPI_Datatype *sendtype,void **recvbuf,int *recvcount,MPI_Datatype *recvtype,int *root,MPI_Comm *comm, FTN_INT *ierr),( sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm,ierr)){

 /* *ierr=MPI_Scatter(*c_sendbuf,c_sendcount,c_sendtype,*c_recvbuf,c_recvcount,c_recvtype,c_root,c_comm);*/

}


