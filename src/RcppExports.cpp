// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// BVAR_linear
List BVAR_linear(const SEXP Y_in, const SEXP p_in, const SEXP draws_in, const SEXP burnin_in, const SEXP cons_in, const SEXP trend_in, const SEXP sv_in, const SEXP thin_in, const SEXP prior_in, const SEXP hyperparam_in, const SEXP Ex_in);
RcppExport SEXP _BTSM_BVAR_linear(SEXP Y_inSEXP, SEXP p_inSEXP, SEXP draws_inSEXP, SEXP burnin_inSEXP, SEXP cons_inSEXP, SEXP trend_inSEXP, SEXP sv_inSEXP, SEXP thin_inSEXP, SEXP prior_inSEXP, SEXP hyperparam_inSEXP, SEXP Ex_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP >::type Y_in(Y_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type p_in(p_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type draws_in(draws_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type burnin_in(burnin_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type cons_in(cons_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type trend_in(trend_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type sv_in(sv_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type thin_in(thin_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type prior_in(prior_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type hyperparam_in(hyperparam_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type Ex_in(Ex_inSEXP);
    rcpp_result_gen = Rcpp::wrap(BVAR_linear(Y_in, p_in, draws_in, burnin_in, cons_in, trend_in, sv_in, thin_in, prior_in, hyperparam_in, Ex_in));
    return rcpp_result_gen;
END_RCPP
}
// do_rgig1
double do_rgig1(double lambda, double chi, double psi);
RcppExport SEXP _BTSM_do_rgig1(SEXP lambdaSEXP, SEXP chiSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type chi(chiSEXP);
    Rcpp::traits::input_parameter< double >::type psi(psiSEXP);
    rcpp_result_gen = Rcpp::wrap(do_rgig1(lambda, chi, psi));
    return rcpp_result_gen;
END_RCPP
}
// dmvnrm_arma_fast
arma::vec dmvnrm_arma_fast(const arma::mat& x, const arma::mat& mean, const arma::mat& sigma, bool const logd);
RcppExport SEXP _BTSM_dmvnrm_arma_fast(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool const >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnrm_arma_fast(x, mean, sigma, logd));
    return rcpp_result_gen;
END_RCPP
}
// loglik_C
List loglik_C(const SEXP Y_in, const SEXP X_in, const arma::cube A_in, const arma::cube S_in, const SEXP thindraws_in);
RcppExport SEXP _BTSM_loglik_C(SEXP Y_inSEXP, SEXP X_inSEXP, SEXP A_inSEXP, SEXP S_inSEXP, SEXP thindraws_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP >::type Y_in(Y_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type X_in(X_inSEXP);
    Rcpp::traits::input_parameter< const arma::cube >::type A_in(A_inSEXP);
    Rcpp::traits::input_parameter< const arma::cube >::type S_in(S_inSEXP);
    Rcpp::traits::input_parameter< const SEXP >::type thindraws_in(thindraws_inSEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_C(Y_in, X_in, A_in, S_in, thindraws_in));
    return rcpp_result_gen;
END_RCPP
}
// sample_McCausland
arma::mat sample_McCausland(arma::vec ystar, arma::mat Fstar);
RcppExport SEXP _BTSM_sample_McCausland(SEXP ystarSEXP, SEXP FstarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type ystar(ystarSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Fstar(FstarSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_McCausland(ystar, Fstar));
    return rcpp_result_gen;
END_RCPP
}
// MH_step
double MH_step(double current_val, double c_tuning_par, int d, double scale_par, arma::vec param_vec, double b, double nu, double hyp1, double hyp2);
RcppExport SEXP _BTSM_MH_step(SEXP current_valSEXP, SEXP c_tuning_parSEXP, SEXP dSEXP, SEXP scale_parSEXP, SEXP param_vecSEXP, SEXP bSEXP, SEXP nuSEXP, SEXP hyp1SEXP, SEXP hyp2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type current_val(current_valSEXP);
    Rcpp::traits::input_parameter< double >::type c_tuning_par(c_tuning_parSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< double >::type scale_par(scale_parSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type param_vec(param_vecSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< double >::type hyp1(hyp1SEXP);
    Rcpp::traits::input_parameter< double >::type hyp2(hyp2SEXP);
    rcpp_result_gen = Rcpp::wrap(MH_step(current_val, c_tuning_par, d, scale_par, param_vec, b, nu, hyp1, hyp2));
    return rcpp_result_gen;
END_RCPP
}
// get_threshold
NumericVector get_threshold(NumericMatrix Achg1, NumericMatrix SIGMAS1, NumericMatrix SIGMAS2, NumericMatrix threshgrid, NumericMatrix Aapprox);
RcppExport SEXP _BTSM_get_threshold(SEXP Achg1SEXP, SEXP SIGMAS1SEXP, SEXP SIGMAS2SEXP, SEXP threshgridSEXP, SEXP AapproxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Achg1(Achg1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type SIGMAS1(SIGMAS1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type SIGMAS2(SIGMAS2SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type threshgrid(threshgridSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Aapprox(AapproxSEXP);
    rcpp_result_gen = Rcpp::wrap(get_threshold(Achg1, SIGMAS1, SIGMAS2, threshgrid, Aapprox));
    return rcpp_result_gen;
END_RCPP
}
// dinvgamma
double dinvgamma(const double x, const double a, const double b);
RcppExport SEXP _BTSM_dinvgamma(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type x(xSEXP);
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(dinvgamma(x, a, b));
    return rcpp_result_gen;
END_RCPP
}
// KF
List KF(NumericMatrix y, NumericMatrix Z, NumericMatrix Ht, NumericMatrix Qtt, int m, int p, int t, NumericVector B0, NumericMatrix V0);
RcppExport SEXP _BTSM_KF(SEXP ySEXP, SEXP ZSEXP, SEXP HtSEXP, SEXP QttSEXP, SEXP mSEXP, SEXP pSEXP, SEXP tSEXP, SEXP B0SEXP, SEXP V0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Ht(HtSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Qtt(QttSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type B0(B0SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type V0(V0SEXP);
    rcpp_result_gen = Rcpp::wrap(KF(y, Z, Ht, Qtt, m, p, t, B0, V0));
    return rcpp_result_gen;
END_RCPP
}
// get_lik
double get_lik(NumericMatrix y, NumericMatrix Z, NumericMatrix Ht, NumericMatrix Qtt, int m, int p, int t, NumericVector B0, NumericMatrix V0);
RcppExport SEXP _BTSM_get_lik(SEXP ySEXP, SEXP ZSEXP, SEXP HtSEXP, SEXP QttSEXP, SEXP mSEXP, SEXP pSEXP, SEXP tSEXP, SEXP B0SEXP, SEXP V0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Ht(HtSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Qtt(QttSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type B0(B0SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type V0(V0SEXP);
    rcpp_result_gen = Rcpp::wrap(get_lik(y, Z, Ht, Qtt, m, p, t, B0, V0));
    return rcpp_result_gen;
END_RCPP
}
// KF_fast
List KF_fast(NumericMatrix y, NumericMatrix Z, NumericMatrix Ht, NumericMatrix Qtt, int m, int p, int t, NumericVector B0, NumericMatrix V0);
RcppExport SEXP _BTSM_KF_fast(SEXP ySEXP, SEXP ZSEXP, SEXP HtSEXP, SEXP QttSEXP, SEXP mSEXP, SEXP pSEXP, SEXP tSEXP, SEXP B0SEXP, SEXP V0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Ht(HtSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Qtt(QttSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type B0(B0SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type V0(V0SEXP);
    rcpp_result_gen = Rcpp::wrap(KF_fast(y, Z, Ht, Qtt, m, p, t, B0, V0));
    return rcpp_result_gen;
END_RCPP
}
// KF_MH
List KF_MH(NumericMatrix y, NumericMatrix Z, NumericMatrix Ht, NumericMatrix Qtt, int m, int p, int t, NumericVector B0, NumericMatrix V0);
RcppExport SEXP _BTSM_KF_MH(SEXP ySEXP, SEXP ZSEXP, SEXP HtSEXP, SEXP QttSEXP, SEXP mSEXP, SEXP pSEXP, SEXP tSEXP, SEXP B0SEXP, SEXP V0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Ht(HtSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Qtt(QttSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type B0(B0SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type V0(V0SEXP);
    rcpp_result_gen = Rcpp::wrap(KF_MH(y, Z, Ht, Qtt, m, p, t, B0, V0));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BTSM_BVAR_linear", (DL_FUNC) &_BTSM_BVAR_linear, 11},
    {"_BTSM_do_rgig1", (DL_FUNC) &_BTSM_do_rgig1, 3},
    {"_BTSM_dmvnrm_arma_fast", (DL_FUNC) &_BTSM_dmvnrm_arma_fast, 4},
    {"_BTSM_loglik_C", (DL_FUNC) &_BTSM_loglik_C, 5},
    {"_BTSM_sample_McCausland", (DL_FUNC) &_BTSM_sample_McCausland, 2},
    {"_BTSM_MH_step", (DL_FUNC) &_BTSM_MH_step, 9},
    {"_BTSM_get_threshold", (DL_FUNC) &_BTSM_get_threshold, 5},
    {"_BTSM_dinvgamma", (DL_FUNC) &_BTSM_dinvgamma, 3},
    {"_BTSM_KF", (DL_FUNC) &_BTSM_KF, 9},
    {"_BTSM_get_lik", (DL_FUNC) &_BTSM_get_lik, 9},
    {"_BTSM_KF_fast", (DL_FUNC) &_BTSM_KF_fast, 9},
    {"_BTSM_KF_MH", (DL_FUNC) &_BTSM_KF_MH, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_BTSM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
