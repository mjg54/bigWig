#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP bigWig_load(SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"bigWig_load",           (DL_FUNC) &bigWig_load,            2},
    {NULL, NULL, 0}
};

void R_init_bigWiglib(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
