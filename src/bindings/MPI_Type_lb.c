#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Type_lb(MPI_Datatype datatype, MPI_Aint* displacement) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_TYPE_LB,mpi_type_lb,(MPI_Datatype *datatype,MPI_Aint* *displacement, FTN_INT *ierr),( datatype, displacement,ierr)){

 /* *ierr=MPI_Type_lb(c_datatype,c_displacement);/*

}

