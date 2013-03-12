#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Type_commit(MPI_Datatype *datatype) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TYPE_COMMIT,mpi_type_commit,(MPI_Datatype **datatype, FTN_INT *ierr),( datatype,ierr)){

 /* *ierr=MPI_Type_commit(*c_datatype);*/

}


