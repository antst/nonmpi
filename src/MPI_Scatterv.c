#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Scatterv(void *sendbuf, int *sendcounts, int *displs, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, int root, MPI_Comm comm) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_SCATTERV,mpi_scatterv,(void **sendbuf,int **sendcounts,int **displs,MPI_Datatype *sendtype,void **recvbuf,int *recvcount,MPI_Datatype *recvtype,int *root,MPI_Comm *comm, FTN_INT *ierr),( sendbuf, sendcounts, displs, sendtype, recvbuf, recvcount, recvtype, root, comm,ierr)){

 /* *ierr=MPI_Scatterv(*c_sendbuf,*c_sendcounts,*c_displs,c_sendtype,*c_recvbuf,c_recvcount,c_recvtype,c_root,c_comm);*/

}


