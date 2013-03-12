#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Type_vector(int count, int blocklength, int stride, MPI_Datatype oldtype, MPI_Datatype *newtype) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TYPE_VECTOR,mpi_type_vector,(int *count,int *blocklength,int *stride,MPI_Datatype *oldtype,MPI_Datatype **newtype, FTN_INT *ierr),( count, blocklength, stride, oldtype, newtype,ierr)){

 /* *ierr=MPI_Type_vector(c_count,c_blocklength,c_stride,c_oldtype,*c_newtype);/*

}

