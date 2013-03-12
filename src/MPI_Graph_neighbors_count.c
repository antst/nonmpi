#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Graph_neighbors_count(MPI_Comm comm, int rank, int *nneighbors) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GRAPH_NEIGHBORS_COUNT,mpi_graph_neighbors_count,(MPI_Comm *comm,int *rank,int **nneighbors, FTN_INT *ierr),( comm, rank, nneighbors,ierr)){

 /* *ierr=MPI_Graph_neighbors_count(c_comm,c_rank,*c_nneighbors);*/

}


