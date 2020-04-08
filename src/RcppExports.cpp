// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dedup_links
NumericMatrix dedup_links(NumericMatrix links);
RcppExport SEXP _rgrappolo_dedup_links(SEXP linksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type links(linksSEXP);
    rcpp_result_gen = Rcpp::wrap(dedup_links(links));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_parallel_jce
NumericMatrix rcpp_parallel_jce(NumericMatrix mat);
RcppExport SEXP _rgrappolo_rcpp_parallel_jce(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_parallel_jce(mat));
    return rcpp_result_gen;
END_RCPP
}
// parallel_louvain
Rcpp::List parallel_louvain(NumericMatrix links);
RcppExport SEXP _rgrappolo_parallel_louvain(SEXP linksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type links(linksSEXP);
    rcpp_result_gen = Rcpp::wrap(parallel_louvain(links));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rgrappolo_dedup_links", (DL_FUNC) &_rgrappolo_dedup_links, 1},
    {"_rgrappolo_rcpp_parallel_jce", (DL_FUNC) &_rgrappolo_rcpp_parallel_jce, 1},
    {"_rgrappolo_parallel_louvain", (DL_FUNC) &_rgrappolo_parallel_louvain, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_rgrappolo(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
