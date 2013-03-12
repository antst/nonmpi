#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Graph_create(MPI_Comm comm_old, int nnodes, int *index, int *edges, int reorder, MPI_Comm *comm_graph) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_GRAPH_CREATE,mpi_graph_create,(MPI_Comm *comm_old,int *nnodes,int **index,int **edges,int *reorder,MPI_Comm **comm_graph, FTN_INT *ierr),( comm_old, nnodes, index, edges, reorder, comm_graph,ierr)){

 /* *ierr=MPI_Graph_create(c_comm_old,c_nnodes,*c_index,*c_edges,c_reorder,*c_comm_graph);/*

}

