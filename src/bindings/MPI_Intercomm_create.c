#include "mpi.h"
#include "nompi.h"
#include "nompi_fortran.h"


/*C Bindings*/
int MPI_Intercomm_create(MPI_Comm local_comm, int local_leader, MPI_Comm peer_comm, int remote_leader, int tag, MPI_Comm *newintercomm) {

 return(0);
}

/* Fortran Bindings */
NOMPI_FORTRAN(void,MPI_INTERCOMM_CREATE,mpi_intercomm_create,(MPI_Comm *local_comm,int *local_leader,MPI_Comm *peer_comm,int *remote_leader,int *tag,MPI_Comm **newintercomm, FTN_INT *ierr),( local_comm, local_leader, peer_comm, remote_leader, tag, newintercomm,ierr)){

 /* *ierr=MPI_Intercomm_create(c_local_comm,c_local_leader,c_peer_comm,c_remote_leader,c_tag,*c_newintercomm);*/

}


