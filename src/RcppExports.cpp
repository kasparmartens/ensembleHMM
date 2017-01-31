// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// forward_backward_fast
List forward_backward_fast(NumericVector pi, NumericMatrix A, NumericMatrix B, IntegerVector y, int k, int n, bool marginal_distr);
RcppExport SEXP ensembleHMM_forward_backward_fast(SEXP piSEXP, SEXP ASEXP, SEXP BSEXP, SEXP ySEXP, SEXP kSEXP, SEXP nSEXP, SEXP marginal_distrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< bool >::type marginal_distr(marginal_distrSEXP);
    rcpp_result_gen = Rcpp::wrap(forward_backward_fast(pi, A, B, y, k, n, marginal_distr));
    return rcpp_result_gen;
END_RCPP
}
// crossover
void crossover(arma::ivec& x, arma::ivec& y, int t);
RcppExport SEXP ensembleHMM_crossover(SEXP xSEXP, SEXP ySEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::ivec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::ivec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    crossover(x, y, t);
    return R_NilValue;
END_RCPP
}
// crossover_mat
void crossover_mat(IntegerMatrix X, IntegerMatrix Y, int t, IntegerVector which_rows);
RcppExport SEXP ensembleHMM_crossover_mat(SEXP XSEXP, SEXP YSEXP, SEXP tSEXP, SEXP which_rowsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type which_rows(which_rowsSEXP);
    crossover_mat(X, Y, t, which_rows);
    return R_NilValue;
END_RCPP
}
// decimal_to_binary_mapping
IntegerMatrix decimal_to_binary_mapping(int K);
RcppExport SEXP ensembleHMM_decimal_to_binary_mapping(SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(decimal_to_binary_mapping(K));
    return rcpp_result_gen;
END_RCPP
}
// hamming_ball
IntegerVector hamming_ball(int index, int radius, IntegerMatrix& mapping);
RcppExport SEXP ensembleHMM_hamming_ball(SEXP indexSEXP, SEXP radiusSEXP, SEXP mappingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    Rcpp::traits::input_parameter< int >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix& >::type mapping(mappingSEXP);
    rcpp_result_gen = Rcpp::wrap(hamming_ball(index, radius, mapping));
    return rcpp_result_gen;
END_RCPP
}
// construct_all_hamming_balls
IntegerMatrix construct_all_hamming_balls(int radius, IntegerMatrix& mapping);
RcppExport SEXP ensembleHMM_construct_all_hamming_balls(SEXP radiusSEXP, SEXP mappingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix& >::type mapping(mappingSEXP);
    rcpp_result_gen = Rcpp::wrap(construct_all_hamming_balls(radius, mapping));
    return rcpp_result_gen;
END_RCPP
}
// construct_restricted_space
IntegerVector construct_restricted_space(int x_t, IntegerVector which_rows_fixed, IntegerMatrix mapping);
RcppExport SEXP ensembleHMM_construct_restricted_space(SEXP x_tSEXP, SEXP which_rows_fixedSEXP, SEXP mappingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x_t(x_tSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type which_rows_fixed(which_rows_fixedSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type mapping(mappingSEXP);
    rcpp_result_gen = Rcpp::wrap(construct_restricted_space(x_t, which_rows_fixed, mapping));
    return rcpp_result_gen;
END_RCPP
}
// construct_all_restricted_space
IntegerMatrix construct_all_restricted_space(int k_restricted, IntegerVector which_rows_fixed, IntegerMatrix mapping);
RcppExport SEXP ensembleHMM_construct_all_restricted_space(SEXP k_restrictedSEXP, SEXP which_rows_fixedSEXP, SEXP mappingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type k_restricted(k_restrictedSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type which_rows_fixed(which_rows_fixedSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type mapping(mappingSEXP);
    rcpp_result_gen = Rcpp::wrap(construct_all_restricted_space(k_restricted, which_rows_fixed, mapping));
    return rcpp_result_gen;
END_RCPP
}
// ensemble_gaussian
List ensemble_gaussian(int n_chains, NumericVector y, double alpha, int k, int n, int max_iter, int burnin, int thin, bool estimate_marginals, bool fixed_pars, bool parallel_tempering, bool crossovers, NumericVector temperatures, int swap_type, int swaps_burnin, int swaps_freq, NumericVector mu, NumericVector sigma2, IntegerVector which_chains, IntegerVector subsequence, IntegerVector x);
RcppExport SEXP ensembleHMM_ensemble_gaussian(SEXP n_chainsSEXP, SEXP ySEXP, SEXP alphaSEXP, SEXP kSEXP, SEXP nSEXP, SEXP max_iterSEXP, SEXP burninSEXP, SEXP thinSEXP, SEXP estimate_marginalsSEXP, SEXP fixed_parsSEXP, SEXP parallel_temperingSEXP, SEXP crossoversSEXP, SEXP temperaturesSEXP, SEXP swap_typeSEXP, SEXP swaps_burninSEXP, SEXP swaps_freqSEXP, SEXP muSEXP, SEXP sigma2SEXP, SEXP which_chainsSEXP, SEXP subsequenceSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_chains(n_chainsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< bool >::type estimate_marginals(estimate_marginalsSEXP);
    Rcpp::traits::input_parameter< bool >::type fixed_pars(fixed_parsSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel_tempering(parallel_temperingSEXP);
    Rcpp::traits::input_parameter< bool >::type crossovers(crossoversSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type temperatures(temperaturesSEXP);
    Rcpp::traits::input_parameter< int >::type swap_type(swap_typeSEXP);
    Rcpp::traits::input_parameter< int >::type swaps_burnin(swaps_burninSEXP);
    Rcpp::traits::input_parameter< int >::type swaps_freq(swaps_freqSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type which_chains(which_chainsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type subsequence(subsequenceSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(ensemble_gaussian(n_chains, y, alpha, k, n, max_iter, burnin, thin, estimate_marginals, fixed_pars, parallel_tempering, crossovers, temperatures, swap_type, swaps_burnin, swaps_freq, mu, sigma2, which_chains, subsequence, x));
    return rcpp_result_gen;
END_RCPP
}
// ensemble_discrete
List ensemble_discrete(int n_chains, IntegerVector y, double alpha, int k, int s, int n, int max_iter, int burnin, int thin, bool estimate_marginals, bool fixed_pars, bool parallel_tempering, bool crossovers, NumericVector temperatures, int swap_type, int swaps_burnin, int swaps_freq, NumericMatrix B, IntegerVector which_chains, IntegerVector subsequence);
RcppExport SEXP ensembleHMM_ensemble_discrete(SEXP n_chainsSEXP, SEXP ySEXP, SEXP alphaSEXP, SEXP kSEXP, SEXP sSEXP, SEXP nSEXP, SEXP max_iterSEXP, SEXP burninSEXP, SEXP thinSEXP, SEXP estimate_marginalsSEXP, SEXP fixed_parsSEXP, SEXP parallel_temperingSEXP, SEXP crossoversSEXP, SEXP temperaturesSEXP, SEXP swap_typeSEXP, SEXP swaps_burninSEXP, SEXP swaps_freqSEXP, SEXP BSEXP, SEXP which_chainsSEXP, SEXP subsequenceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_chains(n_chainsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< bool >::type estimate_marginals(estimate_marginalsSEXP);
    Rcpp::traits::input_parameter< bool >::type fixed_pars(fixed_parsSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel_tempering(parallel_temperingSEXP);
    Rcpp::traits::input_parameter< bool >::type crossovers(crossoversSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type temperatures(temperaturesSEXP);
    Rcpp::traits::input_parameter< int >::type swap_type(swap_typeSEXP);
    Rcpp::traits::input_parameter< int >::type swaps_burnin(swaps_burninSEXP);
    Rcpp::traits::input_parameter< int >::type swaps_freq(swaps_freqSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type B(BSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type which_chains(which_chainsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type subsequence(subsequenceSEXP);
    rcpp_result_gen = Rcpp::wrap(ensemble_discrete(n_chains, y, alpha, k, s, n, max_iter, burnin, thin, estimate_marginals, fixed_pars, parallel_tempering, crossovers, temperatures, swap_type, swaps_burnin, swaps_freq, B, which_chains, subsequence));
    return rcpp_result_gen;
END_RCPP
}
// ensemble_FHMM
List ensemble_FHMM(int n_chains, NumericMatrix Y, NumericMatrix mu, double sigma, NumericMatrix A, double alpha, int K, int k, int n, int radius, int max_iter, int burnin, int thin, bool estimate_marginals, bool parallel_tempering, bool crossovers, NumericVector temperatures, int swap_type, int swaps_burnin, int swaps_freq, IntegerVector which_chains, IntegerVector subsequence, IntegerVector x, int nrows_crossover, bool HB_sampling, int nrows_gibbs, IntegerMatrix all_combs);
RcppExport SEXP ensembleHMM_ensemble_FHMM(SEXP n_chainsSEXP, SEXP YSEXP, SEXP muSEXP, SEXP sigmaSEXP, SEXP ASEXP, SEXP alphaSEXP, SEXP KSEXP, SEXP kSEXP, SEXP nSEXP, SEXP radiusSEXP, SEXP max_iterSEXP, SEXP burninSEXP, SEXP thinSEXP, SEXP estimate_marginalsSEXP, SEXP parallel_temperingSEXP, SEXP crossoversSEXP, SEXP temperaturesSEXP, SEXP swap_typeSEXP, SEXP swaps_burninSEXP, SEXP swaps_freqSEXP, SEXP which_chainsSEXP, SEXP subsequenceSEXP, SEXP xSEXP, SEXP nrows_crossoverSEXP, SEXP HB_samplingSEXP, SEXP nrows_gibbsSEXP, SEXP all_combsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_chains(n_chainsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< bool >::type estimate_marginals(estimate_marginalsSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel_tempering(parallel_temperingSEXP);
    Rcpp::traits::input_parameter< bool >::type crossovers(crossoversSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type temperatures(temperaturesSEXP);
    Rcpp::traits::input_parameter< int >::type swap_type(swap_typeSEXP);
    Rcpp::traits::input_parameter< int >::type swaps_burnin(swaps_burninSEXP);
    Rcpp::traits::input_parameter< int >::type swaps_freq(swaps_freqSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type which_chains(which_chainsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type subsequence(subsequenceSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type nrows_crossover(nrows_crossoverSEXP);
    Rcpp::traits::input_parameter< bool >::type HB_sampling(HB_samplingSEXP);
    Rcpp::traits::input_parameter< int >::type nrows_gibbs(nrows_gibbsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type all_combs(all_combsSEXP);
    rcpp_result_gen = Rcpp::wrap(ensemble_FHMM(n_chains, Y, mu, sigma, A, alpha, K, k, n, radius, max_iter, burnin, thin, estimate_marginals, parallel_tempering, crossovers, temperatures, swap_type, swaps_burnin, swaps_freq, which_chains, subsequence, x, nrows_crossover, HB_sampling, nrows_gibbs, all_combs));
    return rcpp_result_gen;
END_RCPP
}
