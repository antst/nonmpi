#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Graph_get(MPI_Comm comm, int maxindex, int maxedges, int *index, int *edges) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GRAPH_GET,mpi_graph_get,(MPI_Comm *comm,int *maxindex,int *maxedges,int **index,int **edges, FTN_INT *ierr),( comm, maxindex, maxedges, index, edges,ierr)){

 /* *ierr=MPI_Graph_get(c_comm,c_maxindex,c_maxedges,*c_index,*c_edges);/*

}

