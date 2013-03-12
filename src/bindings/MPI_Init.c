#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Init(int *argc, char ***argv) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_INIT,mpi_init,(int **argc,char ****argv, FTN_INT *ierr),( argc, argv,ierr)){

 /* *ierr=MPI_Init(*c_argc,***c_argv);*/
ierr=0;
}


