#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Type_extent(MPI_Datatype datatype, MPI_Aint *extent) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TYPE_EXTENT,mpi_type_extent,(MPI_Datatype *datatype,MPI_Aint **extent, FTN_INT *ierr),( datatype, extent,ierr)){

 /* *ierr=MPI_Type_extent(c_datatype,*c_extent);*/

}


