#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Pcontrol(const int level, ...){

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_PCONTROL,mpi_pcontrol,(const int *level),( level)){

 /* *ierr=MPI_Pcontrol(c_int level,c_...);*/

}

