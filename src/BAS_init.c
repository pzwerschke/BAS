// This file was automatically generated by 'Kmisc::registerFunctions()'

#include <R.h>
#include <Rinternals.h>

#include <R_ext/Rdynload.h>

SEXP glm_fit(SEXP RX, SEXP RY,SEXP family, SEXP Roffset, SEXP Rweights, SEXP Rpriorcoef, SEXP Rcontrol);
double poisson_loglik(double *Y, double*mu, double *wts, int n);
void poisson_variance(double *mu, double *var, int n);
void poisson_log_info(double *y, double *mu, double *weights, double *var, int n);
void log_link(double *rmu, double *rans, int n);
void log_linkinv(double *reta, double *rans, int n);
void log_mu_eta(double *reta, double *rans, int n);
void poisson_dev_resids(double *ry, double *rmu, double *rwt, double *rans, int n);
void poisson_initialize(double *Y, double *mu, double *weights, int n);
double poisson_dispersion(double *resid, double *weights, int n, int rank);
void logit_variance(double *mu, double *var, int n);
void logit_info(double *y, double *mu, double *weights, double *var, int n);
void logit_precision(double *mu, double *prec, int n);
void logit_link(double *rmu, double *rans, int n);
void logit_linkinv(double *reta, double *rans, int n);
void logit_mu_eta(double *reta, double *rans, int n);
void binomial_dev_resids(double *ry, double *rmu, double *rwt, double *rans, int n);
double binomial_dispersion(double *resid, double *weights, int n, int rank);
void binomial_initialize(double *Y, double *mu, double *weights, int n);
double Gaussian_dispersion(double *resid, double *weights, int n, int rank);
double deviance(double *res, int n);
double quadform (double *bwork, double *R, int p);
void chol2se(double *qr, double *se, double *R, double *covwork, int p, int n);
void QR2cov(double *qr, double *R, double *covwork, int p, int n);
void Lapack_chol2inv(double *A, int sz, double *ans);

R_CallMethodDef callMethods[]  = {
  {"C_glm_fit", (DL_FUNC) &glm_fit, 7},
  {"C_poisson_loglik", (DL_FUNC) &poisson_loglik, 4},
  {"C_poisson_variance", (DL_FUNC) &poisson_variance, 3},
  {"C_poisson_log_info", (DL_FUNC) &poisson_log_info, 5},
  {"C_log_link", (DL_FUNC) &log_link, 3},
  {"C_log_linkinv", (DL_FUNC) &log_linkinv, 3},
  {"C_log_mu_eta", (DL_FUNC) &log_mu_eta, 3},
  {"C_poisson_dev_resids", (DL_FUNC) &poisson_dev_resids, 5},
  {"C_poisson_initialize", (DL_FUNC) &poisson_initialize, 4},
  {"C_poisson_dispersion", (DL_FUNC) &poisson_dispersion, 4},
  {"C_logit_variance", (DL_FUNC) &logit_variance, 3},
  {"C_logit_info", (DL_FUNC) &logit_info, 5},
  {"C_logit_precision", (DL_FUNC) &logit_precision, 3},
  {"C_logit_link", (DL_FUNC) &logit_link, 3},
  {"C_logit_linkinv", (DL_FUNC) &logit_linkinv, 3},
  {"C_logit_mu_eta", (DL_FUNC) &logit_mu_eta, 3},
  {"C_binomial_dev_resids", (DL_FUNC) &binomial_dev_resids, 5},
  {"C_binomial_dispersion", (DL_FUNC) &binomial_dispersion, 4},
  {"C_binomial_initialize", (DL_FUNC) &binomial_initialize, 4},
  {"C_Gaussian_dispersion", (DL_FUNC) &Gaussian_dispersion, 4},
  {"C_deviance", (DL_FUNC) &deviance, 2},
  {"C_chol2se", (DL_FUNC) &chol2se, 6},
  {"C_QR2cov", (DL_FUNC) &QR2cov, 5},
  {"C_Lapack_chol2inv", (DL_FUNC) &Lapack_chol2inv, 3},
  {NULL, NULL, 0}
};

void R_init_BAS(DllInfo *info) {
  R_registerRoutines(info, NULL, callMethods, NULL, NULL);
  R_useDynamicSymbols(info, FALSE);
}

