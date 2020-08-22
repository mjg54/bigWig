#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP bigWig_bp_chrom_query(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP bigWig_bp_query(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP bigWig_probe_query(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP bigWig_query(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP bigWig_unload(SEXP);
extern SEXP bwMap_bp_query(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP foreach_bed(SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"bigWig_bp_chrom_query", (DL_FUNC) &bigWig_bp_chrom_query,  9},
    {"bigWig_bp_query",       (DL_FUNC) &bigWig_bp_query,       12},
    {"bigWig_probe_query",    (DL_FUNC) &bigWig_probe_query,    11},
    {"bigWig_query",          (DL_FUNC) &bigWig_query,           5},
    {"bigWig_unload",         (DL_FUNC) &bigWig_unload,          1},
    {"bwMap_bp_query",        (DL_FUNC) &bwMap_bp_query,         6},
    {"foreach_bed",           (DL_FUNC) &foreach_bed,            3},
    {NULL, NULL, 0}
};

void R_init_bigWig(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
