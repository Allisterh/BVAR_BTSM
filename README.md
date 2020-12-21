# BTSM: Bayesian Time Series Models

<!-- badges: start -->
[//]: # "[![CRAN](http://www.r-pkg.org/badges/version/BGVAR)](https://cran.r-project.org/package=BGVAR)"
[//]: # "[![month](http://cranlogs.r-pkg.org/badges/BGVAR)](https://www.r-pkg.org/pkg/BGVAR)"
[//]: # "[![total](http://cranlogs.r-pkg.org/badges/grand-total/BGVAR)](https://www.r-pkg.org/pkg/BGVAR)"
<!-- badges: end -->

This repository should serve as a compendium of various Bayesian time series models. It consists of estimation procedures and various functions for analysing time series data efficiently.

## Installation

The latest development version can be installed from GitHub.

``` r
devtools::install_github("mboeck11/BTSM")
```

Note that Mac OS needs gfortran binary packages to be installed. See also: https://gcc.gnu.org/wiki/GFortranBinaries.

## Usage

This package focuses on multivariate time series models estimated in a Bayesian fashion.

| Model   | Estimation  | IRFs | Predictions | FEVD | HD  |
|---------|-------------|------|-------------|------|-----|
| BVAR    | `bvar()`    | yes  | yes         | yes  | yes |
| BVEC    | `bvec()`    | yes  | no          | no   | no  |
| BIVAR   | `bivar()`   | yes  | no          | no   | no  |
| BPVAR   | `bpvar()`   | no   | no          | no   | no  |
| BIPVAR  | no          | no   | no          | no   | no  |
| TVPBVAR | `tvpbvar()` | no   | no          | no   | no  |
|---------------------------------------------------------|

## References

Huber, F. and M. Feldkircher (2016) Adaptive Shrinkage in Bayesian Vector Autoregressive Models. *Journal of Business and Economic Statistics*, Vol. 37(1), pp. 27-39.

