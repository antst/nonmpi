#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Scan(void *sendbuf, void *recvbuf, int count, MPI_Datatype datatype, MPI_Op op, MPI_Comm comm ){

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_SCAN,mpi_scan,(void **sendbuf,void **recvbuf,int *count,MPI_Datatype *datatype,MPI_Op *op,MPI_Comm *comm , FTN_INT *ierr),( sendbuf, recvbuf, count, datatype, op, comm ,ierr)){

 /* *ierr=MPI_Scan(*c_sendbuf,*c_recvbuf,c_count,c_datatype,c_op,c_comm );*/

}


