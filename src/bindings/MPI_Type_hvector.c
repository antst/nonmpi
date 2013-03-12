#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Type_hvector(int count, int blocklength, MPI_Aint stride, MPI_Datatype oldtype, MPI_Datatype *newtype) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TYPE_HVECTOR,mpi_type_hvector,(int *count,int *blocklength,MPI_Aint *stride,MPI_Datatype *oldtype,MPI_Datatype **newtype, FTN_INT *ierr),( count, blocklength, stride, oldtype, newtype,ierr)){

 /* *ierr=MPI_Type_hvector(c_count,c_blocklength,c_stride,c_oldtype,*c_newtype);/*

}

