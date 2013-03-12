#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Gatherv(void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int *recvcounts, int *displs, MPI_Datatype recvtype, int root, MPI_Comm comm) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GATHERV,mpi_gatherv,(void **sendbuf,int *sendcount,MPI_Datatype *sendtype,void **recvbuf,int **recvcounts,int **displs,MPI_Datatype *recvtype,int *root,MPI_Comm *comm, FTN_INT *ierr),( sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, root, comm,ierr)){

 /* *ierr=MPI_Gatherv(*c_sendbuf,c_sendcount,c_sendtype,*c_recvbuf,*c_recvcounts,*c_displs,c_recvtype,c_root,c_comm);*/

}


