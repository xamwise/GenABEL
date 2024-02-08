To install the package to run on R (tested on Mac for R version 4.3.2 ) follow these steps: 

1. install GenABEL.data via

  "curl -O https://cran.r-project.org/src/contrib/Archive/GenABEL.data/GenABEL.data_1.0.0.tar.gz" and install via install.packages('path_to_file/GenABEL.data.tar.gz', repos=NULL, type='source')

  OR

  install.packages('devtools')
  library(devtools)
  install_github("GenABEL-Project/GenABEL.data")
  
2. clone this repo or download as .zip

3. Run "R CMD build GenABEL"

4. Run  "R CMD INSTALL GenABEL_1.8-0.tar.gz"
