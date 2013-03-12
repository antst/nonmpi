#ifndef NOMPI_FORTRAN
#define NOMPI_FORTRAN

#define FTN_INT int

#define FTNCALL
#if defined(_WIN32)
/*#define FTNCALL __stdcall*/
#endif

#define NOMPI_FORTRAN(rtype,\
                      ucase_name, \
                      lcase_name, \
                      par_def, \
                      par_list) \
rtype FTNCALL ucase_name par_def;       \
rtype FTNCALL lcase_name par_def {return(ucase_name par_list);}\
rtype FTNCALL lcase_name##_ par_def {return(ucase_name par_list);}\
rtype FTNCALL lcase_name##__ par_def {return(ucase_name par_list);}\
rtype FTNCALL ucase_name par_def

#endif /*C_FTN_DEFS_H_*/
