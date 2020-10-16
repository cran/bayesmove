// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// rmultinom1
IntegerVector rmultinom1(NumericMatrix prob, NumericVector randu);
RcppExport SEXP _bayesmove_rmultinom1(SEXP probSEXP, SEXP randuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type prob(probSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type randu(randuSEXP);
    rcpp_result_gen = Rcpp::wrap(rmultinom1(prob, randu));
    return rcpp_result_gen;
END_RCPP
}
// rmultinom2
IntegerVector rmultinom2(NumericVector prob, int n, NumericVector randu, int nmaxclust);
RcppExport SEXP _bayesmove_rmultinom2(SEXP probSEXP, SEXP nSEXP, SEXP randuSEXP, SEXP nmaxclustSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type prob(probSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type randu(randuSEXP);
    Rcpp::traits::input_parameter< int >::type nmaxclust(nmaxclustSEXP);
    rcpp_result_gen = Rcpp::wrap(rmultinom2(prob, n, randu, nmaxclust));
    return rcpp_result_gen;
END_RCPP
}
// SampleZAgg
List SampleZAgg(int ntsegm, int b1, IntegerMatrix y1, int nmaxclust, NumericMatrix lphi1, NumericMatrix ltheta, NumericVector zeroes);
RcppExport SEXP _bayesmove_SampleZAgg(SEXP ntsegmSEXP, SEXP b1SEXP, SEXP y1SEXP, SEXP nmaxclustSEXP, SEXP lphi1SEXP, SEXP lthetaSEXP, SEXP zeroesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ntsegm(ntsegmSEXP);
    Rcpp::traits::input_parameter< int >::type b1(b1SEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< int >::type nmaxclust(nmaxclustSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type lphi1(lphi1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ltheta(lthetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type zeroes(zeroesSEXP);
    rcpp_result_gen = Rcpp::wrap(SampleZAgg(ntsegm, b1, y1, nmaxclust, lphi1, ltheta, zeroes));
    return rcpp_result_gen;
END_RCPP
}
// CumSumInv
IntegerMatrix CumSumInv(int ntsegm, int nmaxclust, IntegerMatrix z);
RcppExport SEXP _bayesmove_CumSumInv(SEXP ntsegmSEXP, SEXP nmaxclustSEXP, SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type ntsegm(ntsegmSEXP);
    Rcpp::traits::input_parameter< int >::type nmaxclust(nmaxclustSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(CumSumInv(ntsegm, nmaxclust, z));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bayesmove_rmultinom1", (DL_FUNC) &_bayesmove_rmultinom1, 2},
    {"_bayesmove_rmultinom2", (DL_FUNC) &_bayesmove_rmultinom2, 4},
    {"_bayesmove_SampleZAgg", (DL_FUNC) &_bayesmove_SampleZAgg, 7},
    {"_bayesmove_CumSumInv", (DL_FUNC) &_bayesmove_CumSumInv, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_bayesmove(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
