#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Buffer_attach( void *buffer, int size) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_BUFFER_ATTACH,mpi_buffer_attach,( void *buffer,int *size, FTN_INT *ierr),( buffer, size,ierr)){

 /* *ierr=MPI_Buffer_attach(******c_buffer,c_size);*/

}


