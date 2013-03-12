#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Attr_put(MPI_Comm comm, int keyval, void *attribute_val) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_ATTR_PUT,mpi_attr_put,(MPI_Comm *comm,int *keyval,void **attribute_val, FTN_INT *ierr),( comm, keyval, attribute_val,ierr)){

 /* *ierr=MPI_Attr_put(c_comm,c_keyval,*c_attribute_val);*/

}


