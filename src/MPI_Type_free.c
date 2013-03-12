#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Type_free(MPI_Datatype *datatype) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TYPE_FREE,mpi_type_free,(MPI_Datatype **datatype, FTN_INT *ierr),( datatype,ierr)){

 /* *ierr=MPI_Type_free(*c_datatype);*/

}


