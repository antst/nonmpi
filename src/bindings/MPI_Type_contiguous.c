#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Type_contiguous(int count, MPI_Datatype oldtype, MPI_Datatype *newtype) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TYPE_CONTIGUOUS,mpi_type_contiguous,(int *count,MPI_Datatype *oldtype,MPI_Datatype **newtype, FTN_INT *ierr),( count, oldtype, newtype,ierr)){

 /* *ierr=MPI_Type_contiguous(c_count,c_oldtype,*c_newtype);*/

}


