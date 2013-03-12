#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Attr_get(MPI_Comm comm, int keyval, void *attribute_val, int *flag) {

}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ATTR_GET,mpi_attr_get,(MPI_Comm *comm,int *keyval,void **attribute_val,int **flag, FTN_INT *ierr),( comm, keyval, attribute_val, flag,ierr)){

 /* *ierr=MPI_Attr_get(c_comm,c_keyval,*c_attribute_val,*c_flag);/*

}

