% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/meanvar.R
\name{cpss.meanvar}
\alias{cpss.meanvar}
\title{Detecting changes in mean and (co)variance}
\usage{
cpss.meanvar(
  dataset,
  algorithm = "BS",
  dist_min = floor(log(n)),
  ncps_max = ceiling(n^0.4),
  pelt_pen_val = NULL,
  pelt_K = 0,
  wbs_nintervals = 500,
  criterion = "CV",
  times = 2
)
}
\arguments{
\item{dataset}{a numeric matrix of dimension \eqn{n\times d}, where each row represents an observation and each column stands for a variable. A numeric vector is also acceptable for univariate observations.}

\item{algorithm}{a character string specifying the change-point searching algorithm, one of the following choices: "SN" (segment neighborhood), "BS" (binary segmentation), "WBS" (wild binary segmentation) and "PELT" (pruned exact linear time) algorithms.}

\item{dist_min}{an integer specifying minimum searching distance (length of feasible segments).}

\item{ncps_max}{an integer specifying an upper bound of the number of true change-points.}

\item{pelt_pen_val}{a numeric vector specifying candidate values of the penalty only if \code{algorithm = "PELT"}.}

\item{pelt_K}{a numeric value for pruning adjustment only if \code{algorithm = "PELT"}. It is usually taken to be 0 if the negative log-likelihood is used as a cost, see Killick et al. (2012).}

\item{wbs_nintervals}{an integer specifying the number of random intervals drawn only if \code{algorithm = "WBS"}, see Fryzlewicz (2014).}

\item{criterion}{a character string specifying the model selection criterion, "CV" ("cross-validation") or "MS" ("multiple-splitting").}

\item{times}{an integer specifying how many times of sample-splitting should be performed; It should be 2 if \code{criterion = "CV"}.}
}
\value{
\code{cpss.meanvar} returns an object of an \proglang{S4} class, called "\code{cpss}", which collects data and information required for further change-point analyses and summaries. See \code{\link{cpss.custom}}.
}
\description{
Detecting changes in mean and (co)variance
}
\examples{
library("cpss")
if (!requireNamespace("MASS", quietly = TRUE)) {
  stop("Please install the package \"MASS\".")
}
set.seed(666)
n <- 1000
tau <- c(200, 400, 600, 800)
mu <- list(rep(0, 2), rep(1, 2), rep(1, 2), rep(0, 2), rep(0, 2))
Sigma <- list(diag(2), diag(2), matrix(c(1,-1,-1, 4), 2), matrix(c(1, 0.5, 0.5, 1), 2), diag(2))
seg_len <- diff(c(0, tau, n))
y <- lapply(seq(1, length(tau) + 1), function(k) {
  MASS::mvrnorm(n = seg_len[k], mu = mu[[k]], Sigma = Sigma[[k]])
})
y <- do.call(rbind, y)
res <- cpss.meanvar(y, algorithm = "BS", dist_min = 20)
cps(res)
# [1] 211 402 598 804
plot(res, type = "coef")
}
\references{
Killick, R., Fearnhead, P., and Eckley, I. A. (2012). Optimal Detection of Changepoints With a Linear Computational Cost. Journal of the American Statistical Association, 107(500):1590–1598.
Fryzlewicz, P. (2014). Wild binary segmentation for multiple change-point detection. The Annals of Statistics, 42(6): 2243–2281.
}
\seealso{
\code{\link{cpss.mean}} \code{\link{cpss.var}}
}
