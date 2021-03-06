% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/LDA_gibbs_functions.R
\name{get.theta}
\alias{get.theta}
\title{Internal function to calculate theta parameter}
\usage{
get.theta(v, nmaxclust, ntsegm)
}
\arguments{
\item{v}{A matrix returned by \code{\link{sample.v}}}

\item{nmaxclust}{numeric. A single number indicating the maximum number of
clusters to test.}

\item{ntsegm}{numeric. The total number of time segments from all animal IDs.}
}
\value{
A matrix of proportion estimates that represent proportions of
  different behavioral states per time segment.
}
\description{
Calculates values of \emph{theta} matrix within Gibbs sampler. Not for calling
directly by users.
}
