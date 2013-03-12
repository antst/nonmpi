#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Graph_neighbors(MPI_Comm comm, int rank, int maxneighbors, int *neighbors) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GRAPH_NEIGHBORS,mpi_graph_neighbors,(MPI_Comm *comm,int *rank,int *maxneighbors,int **neighbors, FTN_INT *ierr),( comm, rank, maxneighbors, neighbors,ierr)){

 /* *ierr=MPI_Graph_neighbors(c_comm,c_rank,c_maxneighbors,*c_neighbors);*/

}


