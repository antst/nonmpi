#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Allgather(void *sendbuf, int sendcount, MPI_Datatype sendtype, void *recvbuf, int recvcount, MPI_Datatype recvtype, MPI_Comm comm) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ALLGATHER,mpi_allgather,(void **sendbuf,int *sendcount,MPI_Datatype *sendtype,void **recvbuf,int *recvcount,MPI_Datatype *recvtype,MPI_Comm *comm, FTN_INT *ierr),( sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm,ierr)){

 /* *ierr=MPI_Allgather(*c_sendbuf,c_sendcount,c_sendtype,*c_recvbuf,c_recvcount,c_recvtype,c_comm);*/

}


