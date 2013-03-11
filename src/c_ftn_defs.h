#ifndef C_FTN_DEFS_H_
#define C_FTN_DEFS_H_

#if defined(_WIN32)
/*#define USE_STD_CALL __stdcall*/
#endif


#define FORTRAN(rf,nu,nl,pl,pc)                \
rf nu pl;                                      \
rf nl pl                                       \
{ return(nu pc); }                             \
rf nl##_ pl                                    \
{ return(nu pc); }                             \
rf nl##__ pl                                   \
{ return(nu pc); }                             \
rf nu pl
#endif /*C_FTN_DEFS_H_*/
