% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/segmentation_gibbs_functions.R
\name{samp_move}
\alias{samp_move}
\title{Internal function for the Gibbs sampler within the reversible-jump MCMC
algorithm}
\usage{
samp_move(breakpt, max.time, dat, alpha, nbins, ndata.types)
}
\arguments{
\item{breakpt}{numeric. A vector of breakpoints.}

\item{max.time}{numeric. The number of of the last observation of \code{dat}.}

\item{dat}{A matrix that only contains columns storing discretized data for
each of the movement variables used within \code{\link{get_summary_stats}}.}

\item{alpha}{numeric. A single value used to specify the hyperparameter for
the prior distribution. A standard value for \code{alpha} is typically 1,
which corresponds with a vague prior on the Dirichlet distribution.}

\item{nbins}{numeric. A vector of the number of bins used to discretize each
movement variable. These must be in the same order as the columns within
\code{dat}.}

\item{ndata.types}{numeric. The length of \code{nbins}.}
}
\value{
The breakpoints and log marginal likelihood are retained from the
  selected model from the Gibbs sampler and returned as elements of a list.
  This is performed for each iteration of the MCMC algorithm.
}
\description{
This is RJMCMC algorithm that drives the proposal and selection of
breakpoints for the data based on the difference in log marginal likelihood.
This function is called within \code{\link{behav_gibbs_sampler}}.
}
