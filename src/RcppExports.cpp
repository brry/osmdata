// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_get_osmdata
Rcpp::List rcpp_get_osmdata(const std::string& st);
RcppExport SEXP osmdata_rcpp_get_osmdata(SEXP stSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type st(stSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_osmdata(st));
    return rcpp_result_gen;
END_RCPP
}
