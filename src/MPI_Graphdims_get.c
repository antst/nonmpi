#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Graphdims_get(MPI_Comm comm, int *nnodes, int *nedges) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GRAPHDIMS_GET,mpi_graphdims_get,(MPI_Comm *comm,int **nnodes,int **nedges, FTN_INT *ierr),( comm, nnodes, nedges,ierr)){

 /* *ierr=MPI_Graphdims_get(c_comm,*c_nnodes,*c_nedges);*/

}


