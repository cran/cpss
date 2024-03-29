// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// get_cost_mean
double get_cost_mean(List dat_smry, int s, int e);
RcppExport SEXP _cpss_get_cost_mean(SEXP dat_smrySEXP, SEXP sSEXP, SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dat_smry(dat_smrySEXP);
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< int >::type e(eSEXP);
    rcpp_result_gen = Rcpp::wrap(get_cost_mean(dat_smry, s, e));
    return rcpp_result_gen;
END_RCPP
}
// get_cost_var
double get_cost_var(List dat_smry, int s, int e);
RcppExport SEXP _cpss_get_cost_var(SEXP dat_smrySEXP, SEXP sSEXP, SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dat_smry(dat_smrySEXP);
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< int >::type e(eSEXP);
    rcpp_result_gen = Rcpp::wrap(get_cost_var(dat_smry, s, e));
    return rcpp_result_gen;
END_RCPP
}
// get_cost_meanvar
double get_cost_meanvar(List dat_smry, int s, int e);
RcppExport SEXP _cpss_get_cost_meanvar(SEXP dat_smrySEXP, SEXP sSEXP, SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dat_smry(dat_smrySEXP);
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< int >::type e(eSEXP);
    rcpp_result_gen = Rcpp::wrap(get_cost_meanvar(dat_smry, s, e));
    return rcpp_result_gen;
END_RCPP
}
// get_cost_em
double get_cost_em(List dat_smry, int s, int e);
RcppExport SEXP _cpss_get_cost_em(SEXP dat_smrySEXP, SEXP sSEXP, SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dat_smry(dat_smrySEXP);
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< int >::type e(eSEXP);
    rcpp_result_gen = Rcpp::wrap(get_cost_em(dat_smry, s, e));
    return rcpp_result_gen;
END_RCPP
}
// SN
List SN(List dat_smry, int n, int L, int d, std::string model);
RcppExport SEXP _cpss_SN(SEXP dat_smrySEXP, SEXP nSEXP, SEXP LSEXP, SEXP dSEXP, SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dat_smry(dat_smrySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(SN(dat_smry, n, L, d, model));
    return rcpp_result_gen;
END_RCPP
}
// BS
List BS(List dat_smry, int n, int L, int d, std::string model);
RcppExport SEXP _cpss_BS(SEXP dat_smrySEXP, SEXP nSEXP, SEXP LSEXP, SEXP dSEXP, SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dat_smry(dat_smrySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(BS(dat_smry, n, L, d, model));
    return rcpp_result_gen;
END_RCPP
}
// WBS
List WBS(List dat_smry, int n, int L, int d, arma::mat lr_M, std::string model);
RcppExport SEXP _cpss_WBS(SEXP dat_smrySEXP, SEXP nSEXP, SEXP LSEXP, SEXP dSEXP, SEXP lr_MSEXP, SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dat_smry(dat_smrySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lr_M(lr_MSEXP);
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(WBS(dat_smry, n, L, d, lr_M, model));
    return rcpp_result_gen;
END_RCPP
}
// PELT
List PELT(List dat_smry, int n, arma::vec pen_val, int d, double K, std::string model);
RcppExport SEXP _cpss_PELT(SEXP dat_smrySEXP, SEXP nSEXP, SEXP pen_valSEXP, SEXP dSEXP, SEXP KSEXP, SEXP modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dat_smry(dat_smrySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pen_val(pen_valSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type K(KSEXP);
    Rcpp::traits::input_parameter< std::string >::type model(modelSEXP);
    rcpp_result_gen = Rcpp::wrap(PELT(dat_smry, n, pen_val, d, K, model));
    return rcpp_result_gen;
END_RCPP
}
// SN_custom
List SN_custom(List dat_smry, int n, int L, int d, Function get_cost);
RcppExport SEXP _cpss_SN_custom(SEXP dat_smrySEXP, SEXP nSEXP, SEXP LSEXP, SEXP dSEXP, SEXP get_costSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dat_smry(dat_smrySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< Function >::type get_cost(get_costSEXP);
    rcpp_result_gen = Rcpp::wrap(SN_custom(dat_smry, n, L, d, get_cost));
    return rcpp_result_gen;
END_RCPP
}
// BS_custom
List BS_custom(List dat_smry, int n, int L, int d, Function get_cost);
RcppExport SEXP _cpss_BS_custom(SEXP dat_smrySEXP, SEXP nSEXP, SEXP LSEXP, SEXP dSEXP, SEXP get_costSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dat_smry(dat_smrySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< Function >::type get_cost(get_costSEXP);
    rcpp_result_gen = Rcpp::wrap(BS_custom(dat_smry, n, L, d, get_cost));
    return rcpp_result_gen;
END_RCPP
}
// WBS_custom
List WBS_custom(List dat_smry, int n, int L, int d, arma::mat lr_M, Function get_cost);
RcppExport SEXP _cpss_WBS_custom(SEXP dat_smrySEXP, SEXP nSEXP, SEXP LSEXP, SEXP dSEXP, SEXP lr_MSEXP, SEXP get_costSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dat_smry(dat_smrySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type L(LSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type lr_M(lr_MSEXP);
    Rcpp::traits::input_parameter< Function >::type get_cost(get_costSEXP);
    rcpp_result_gen = Rcpp::wrap(WBS_custom(dat_smry, n, L, d, lr_M, get_cost));
    return rcpp_result_gen;
END_RCPP
}
// PELT_custom
List PELT_custom(List dat_smry, int n, arma::vec pen_val, int d, double K, Function get_cost);
RcppExport SEXP _cpss_PELT_custom(SEXP dat_smrySEXP, SEXP nSEXP, SEXP pen_valSEXP, SEXP dSEXP, SEXP KSEXP, SEXP get_costSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type dat_smry(dat_smrySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pen_val(pen_valSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type K(KSEXP);
    Rcpp::traits::input_parameter< Function >::type get_cost(get_costSEXP);
    rcpp_result_gen = Rcpp::wrap(PELT_custom(dat_smry, n, pen_val, d, K, get_cost));
    return rcpp_result_gen;
END_RCPP
}
// lh_binom
arma::vec lh_binom(int N, arma::vec x);
RcppExport SEXP _cpss_lh_binom(SEXP NSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(lh_binom(N, x));
    return rcpp_result_gen;
END_RCPP
}
// lh_multinom
arma::vec lh_multinom(int N, arma::mat x);
RcppExport SEXP _cpss_lh_multinom(SEXP NSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(lh_multinom(N, x));
    return rcpp_result_gen;
END_RCPP
}
// est_cov
arma::mat est_cov(arma::mat dataset);
RcppExport SEXP _cpss_est_cov(SEXP datasetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dataset(datasetSEXP);
    rcpp_result_gen = Rcpp::wrap(est_cov(dataset));
    return rcpp_result_gen;
END_RCPP
}
// g_smry_mean
List g_smry_mean(arma::mat dataset, arma::mat Sigma);
RcppExport SEXP _cpss_g_smry_mean(SEXP datasetSEXP, SEXP SigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dataset(datasetSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma(SigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(g_smry_mean(dataset, Sigma));
    return rcpp_result_gen;
END_RCPP
}
// g_smry_var
List g_smry_var(arma::mat dataset, arma::vec mu);
RcppExport SEXP _cpss_g_smry_var(SEXP datasetSEXP, SEXP muSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dataset(datasetSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    rcpp_result_gen = Rcpp::wrap(g_smry_var(dataset, mu));
    return rcpp_result_gen;
END_RCPP
}
// g_smry_meanvar
List g_smry_meanvar(arma::mat dataset, SEXP param_opt);
RcppExport SEXP _cpss_g_smry_meanvar(SEXP datasetSEXP, SEXP param_optSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dataset(datasetSEXP);
    Rcpp::traits::input_parameter< SEXP >::type param_opt(param_optSEXP);
    rcpp_result_gen = Rcpp::wrap(g_smry_meanvar(dataset, param_opt));
    return rcpp_result_gen;
END_RCPP
}
// g_smry_em
List g_smry_em(arma::mat dataset, List param_opt);
RcppExport SEXP _cpss_g_smry_em(SEXP datasetSEXP, SEXP param_optSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type dataset(datasetSEXP);
    Rcpp::traits::input_parameter< List >::type param_opt(param_optSEXP);
    rcpp_result_gen = Rcpp::wrap(g_smry_em(dataset, param_opt));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_cpss_get_cost_mean", (DL_FUNC) &_cpss_get_cost_mean, 3},
    {"_cpss_get_cost_var", (DL_FUNC) &_cpss_get_cost_var, 3},
    {"_cpss_get_cost_meanvar", (DL_FUNC) &_cpss_get_cost_meanvar, 3},
    {"_cpss_get_cost_em", (DL_FUNC) &_cpss_get_cost_em, 3},
    {"_cpss_SN", (DL_FUNC) &_cpss_SN, 5},
    {"_cpss_BS", (DL_FUNC) &_cpss_BS, 5},
    {"_cpss_WBS", (DL_FUNC) &_cpss_WBS, 6},
    {"_cpss_PELT", (DL_FUNC) &_cpss_PELT, 6},
    {"_cpss_SN_custom", (DL_FUNC) &_cpss_SN_custom, 5},
    {"_cpss_BS_custom", (DL_FUNC) &_cpss_BS_custom, 5},
    {"_cpss_WBS_custom", (DL_FUNC) &_cpss_WBS_custom, 6},
    {"_cpss_PELT_custom", (DL_FUNC) &_cpss_PELT_custom, 6},
    {"_cpss_lh_binom", (DL_FUNC) &_cpss_lh_binom, 2},
    {"_cpss_lh_multinom", (DL_FUNC) &_cpss_lh_multinom, 2},
    {"_cpss_est_cov", (DL_FUNC) &_cpss_est_cov, 1},
    {"_cpss_g_smry_mean", (DL_FUNC) &_cpss_g_smry_mean, 2},
    {"_cpss_g_smry_var", (DL_FUNC) &_cpss_g_smry_var, 2},
    {"_cpss_g_smry_meanvar", (DL_FUNC) &_cpss_g_smry_meanvar, 2},
    {"_cpss_g_smry_em", (DL_FUNC) &_cpss_g_smry_em, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_cpss(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
