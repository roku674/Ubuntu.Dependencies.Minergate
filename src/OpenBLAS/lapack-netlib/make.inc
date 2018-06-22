FORTRAN     = gfortran
OPTS        = -O2 -Wall -m64 -fopenmp -fPIC
POPTS       = -Wall -m64 -fopenmp -fPIC -pg -fno-inline
NOOPT       = -O0 -Wall -m64 -fopenmp -fPIC
PNOOPT      = -Wall -m64 -fopenmp -fPIC -pg -fno-inline -O0
LOADOPTS    = -O2 -Wall -m64 -fopenmp -fPIC -lm -lpthread -lgfortran
CC          = gcc
override CFLAGS      = -O2 -DMAX_STACK_ALLOC=2048 -fopenmp -Wall -m64 -DF_INTERFACE_GFORT -fPIC -DSMP_SERVER -DUSE_OPENMP -DNO_WARMUP -DMAX_CPU_NUMBER=72 -DASMNAME= -DASMFNAME=_ -DNAME=_ -DCNAME= -DCHAR_NAME="_" -DCHAR_CNAME="" -I. -DHAVE_LAPACK_CONFIG_H
ARCH        = ar
ARCHFLAGS   = -ru
RANLIB      = ranlib
LAPACKLIB   = ../libopenblas_haswellp-r0.2.20.a
TMGLIB      = ../libopenblas_haswellp-r0.2.20.a
BLASLIB     = ../../../libopenblas_haswellp-r0.2.20.a
LAPACKELIB  = ../libopenblas_haswellp-r0.2.20.a
LAPACKLIB_P = ../libopenblas_haswellp-r0.2.20_p.a
SUFFIX      = o
PSUFFIX     = po
CEXTRALIB   = -lm -lpthread -lgfortran
TIMER       = INT_ETIME
LOADER      = gfortran -pthread
BUILD_DEPRECATED      = 1
SHELL = /bin/sh
PLAT = _LINUX
DRVOPTS  = $(NOOPT)
ARCHFLAGS= -ru
#RANLIB   = ranlib

