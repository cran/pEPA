// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/pEPA.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// sigC3
mat sigC3(mat dLtil, int K, int T, int N, vec id, vec H);
RcppExport SEXP _pEPA_sigC3(SEXP dLtilSEXP, SEXP KSEXP, SEXP TSEXP, SEXP NSEXP, SEXP idSEXP, SEXP HSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< mat >::type dLtil(dLtilSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< vec >::type id(idSEXP);
    Rcpp::traits::input_parameter< vec >::type H(HSEXP);
    rcpp_result_gen = Rcpp::wrap(sigC3(dLtil, K, T, N, id, H));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pEPA_sigC3", (DL_FUNC) &_pEPA_sigC3, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_pEPA(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
