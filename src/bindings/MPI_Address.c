#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Address(void *location, MPI_Aint *address) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ADDRESS,mpi_address,(void **location,MPI_Aint **address, FTN_INT *ierr),( location, address,ierr)){

 /* *ierr=MPI_Address(*c_location,*c_address);/*

}

