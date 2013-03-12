#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Type_hindexed(int count, int *array_of_blocklengths, MPI_Aint *array_of_displacements, MPI_Datatype oldtype, MPI_Datatype *newtype) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TYPE_HINDEXED,mpi_type_hindexed,(int *count,int **array_of_blocklengths,MPI_Aint **array_of_displacements,MPI_Datatype *oldtype,MPI_Datatype **newtype, FTN_INT *ierr),( count, array_of_blocklengths, array_of_displacements, oldtype, newtype,ierr)){

 /* *ierr=MPI_Type_hindexed(c_count,*c_array_of_blocklengths,*c_array_of_displacements,c_oldtype,*c_newtype);/*

}

