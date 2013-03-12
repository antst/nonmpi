#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Type_ub(MPI_Datatype datatype, MPI_Aint* displacement) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TYPE_UB,mpi_type_ub,(MPI_Datatype *datatype,MPI_Aint* *displacement, FTN_INT *ierr),( datatype, displacement,ierr)){

 /* *ierr=MPI_Type_ub(c_datatype,c_displacement);/*

}

