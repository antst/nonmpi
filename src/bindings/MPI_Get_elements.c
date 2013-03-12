#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Get_elements(MPI_Status *status, MPI_Datatype datatype, int *count) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GET_ELEMENTS,mpi_get_elements,(MPI_Status **status,MPI_Datatype *datatype,int **count, FTN_INT *ierr),( status, datatype, count,ierr)){

 /* *ierr=MPI_Get_elements(*c_status,c_datatype,*c_count);*/

}


