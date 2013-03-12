#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Graph_map(MPI_Comm comm, int nnodes, int *index, int *edges, int *newrank) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GRAPH_MAP,mpi_graph_map,(MPI_Comm *comm,int *nnodes,int **index,int **edges,int **newrank, FTN_INT *ierr),( comm, nnodes, index, edges, newrank,ierr)){

 /* *ierr=MPI_Graph_map(c_comm,c_nnodes,*c_index,*c_edges,*c_newrank);*/

}


