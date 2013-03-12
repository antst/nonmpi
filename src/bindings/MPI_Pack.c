#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Pack(void *inbuf, int incount, MPI_Datatype datatype, void *outbuf, int outsize, int *position, MPI_Comm comm) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_PACK,mpi_pack,(void **inbuf,int *incount,MPI_Datatype *datatype,void **outbuf,int *outsize,int **position,MPI_Comm *comm, FTN_INT *ierr),( inbuf, incount, datatype, outbuf, outsize, position, comm,ierr)){

 /* *ierr=MPI_Pack(*c_inbuf,c_incount,c_datatype,*c_outbuf,c_outsize,*c_position,c_comm);*/

}


