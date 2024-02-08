/*
 *  R : A Computer Language for Statistical Data Analysis
 *  Copyright (C) 2001-5   The R Development Core Team.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, a copy is available at
 *  http://www.r-project.org/Licenses/
 */

#ifndef R_CTEST_H
#define R_CTEST_H

#include <R.h>
//void myfun(void);

void chisqsim(int *nrow, int *ncol, int *nrowt, int *ncolt, int *n,
	      int *b, double *expected, int *observed, double *fact,
	      int *jwork, double *results);
void fisher_sim(int *nrow, int *ncol, int *nrowt, int *ncolt, int *n,
		int *b, int *observed, double *fact,
		int *jwork, double *results);
void d2x2xk(int *k, double *m, double *n, double *t, double *d);
void fexact(int *nrow, int *ncol, int *table, int *ldtabl,
	    double *expect, double *percnt, double *emin, double *prt,
	    double *pre, int *workspace, int *mult);
void pansari(int *len, double *x, int *m, int *n);
void dansari(int *len, double *x, int *m, int *n);
void pkolmogorov2x(double *x, int *n);
void pkendall(int *len, double *x, int *n);
void pkstwo(int *n, double *x, double *tol) ;
void prho(int *n, double *is, double *pv, int *ifault, int *lower_tail);
void psmirnov2x(double *x, int *m, int *n);
void qansari(int *len, double *x, int *m, int *n);
void swilk(int *init, float *x, int *n, int *n1, int *n2,
	   float *a,  double *w, double *pw, int *ifault);

#endif
