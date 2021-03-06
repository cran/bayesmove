% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/mixmod_gibbs_sampler.R
\name{cluster_obs}
\alias{cluster_obs}
\title{Cluster observations into behavioral states}
\usage{
cluster_obs(dat, alpha, ngibbs, nmaxclust, nburn)
}
\arguments{
\item{dat}{A data frame that **only** contains columns for the discretized
movement variables.}

\item{alpha}{numeric. A single value used to specify the hyperparameter for
the prior distribution.}

\item{ngibbs}{numeric. The total number of iterations of the MCMC chain.}

\item{nmaxclust}{numeric. A single number indicating the maximum number of
clusters to test.}

\item{nburn}{numeric. The length of the burn-in phase.}
}
\value{
A list of model results is returned where elements include the
  \code{phi} matrix for each data stream, \code{theta} matrix, log likelihood
  estimates for each iteration of the MCMC chain \code{loglikel}, a list of
  the MAP estimates of the latent states for each observation \code{z.MAP}, a
  matrix of the whole posterior of state assignments per observation
  \code{z.posterior}, and a vector \code{gamma1} of estimates for the gamma
  hyperparameter.
}
\description{
This function uses a Gibbs sampler within a mixture model to estimate the
optimal number of behavioral states, the state-dependent distributions, and
to assign behavioral states to each observation. This model does not assume
an underlying mechanistic process.
}
\details{
The mixture model analyzes all animal IDs pooled together, thus providing a
population-level estimate of behavioral states.
}
\examples{
\donttest{
data(tracks.list)

#convert from list to data frame
tracks.list<- dplyr::bind_rows(tracks.list)

#only retain id and discretized step length (SL) and turning angle (TA) columns
tracks<- subset(tracks.list, select = c(SL, TA))


set.seed(1)

# Define model params
alpha=0.1
ngibbs=1000
nburn=ngibbs/2
nmaxclust=7

dat.res<- cluster_obs(dat = tracks, alpha = alpha, ngibbs = ngibbs,
                           nmaxclust = nmaxclust, nburn = nburn)
}

}
