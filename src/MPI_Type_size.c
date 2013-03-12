#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Type_size(MPI_Datatype datatype, int *size) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TYPE_SIZE,mpi_type_size,(MPI_Datatype *datatype,int **size, FTN_INT *ierr),( datatype, size,ierr)){

 /* *ierr=MPI_Type_size(c_datatype,*c_size);*/

}


