#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Type_struct(int count, int *array_of_blocklengths, MPI_Aint *array_of_displacements, MPI_Datatype *array_of_types, MPI_Datatype *newtype) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TYPE_STRUCT,mpi_type_struct,(int *count,int **array_of_blocklengths,MPI_Aint **array_of_displacements,MPI_Datatype **array_of_types,MPI_Datatype **newtype, FTN_INT *ierr),( count, array_of_blocklengths, array_of_displacements, array_of_types, newtype,ierr)){

 /* *ierr=MPI_Type_struct(c_count,*c_array_of_blocklengths,*c_array_of_displacements,*c_array_of_types,*c_newtype);/*

}

