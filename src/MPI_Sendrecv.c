#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Sendrecv(void *sendbuf, int sendcount, MPI_Datatype sendtype, int dest, int sendtag, void *recvbuf, int recvcount, MPI_Datatype recvtype, int source, MPI_Datatype recvtag, MPI_Comm comm, MPI_Status *status) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_SENDRECV,mpi_sendrecv,(void **sendbuf,int *sendcount,MPI_Datatype *sendtype,int *dest,int *sendtag,void **recvbuf,int *recvcount,MPI_Datatype *recvtype,int *source,MPI_Datatype *recvtag,MPI_Comm *comm,MPI_Status **status, FTN_INT *ierr),( sendbuf, sendcount, sendtype, dest, sendtag, recvbuf, recvcount, recvtype, source, recvtag, comm, status,ierr)){

 /* *ierr=MPI_Sendrecv(*c_sendbuf,c_sendcount,c_sendtype,c_dest,c_sendtag,*c_recvbuf,c_recvcount,c_recvtype,c_source,c_recvtag,c_comm,*c_status);*/

}


