// Copyright (c) 2023 Chaitanya Kesanapalli <ckesanapalli@gmail.com>
//
// This file is part of the coupling Moordyn solver to the StarCCM+ software.
//
// Description: 
//     This is the default header file for the StarCCM+ coupling library.
//
// Reference: 
//     User Guide. "StarCCM+ 2302" SIEMENS simcenter (2023).

#ifndef UCLIB_H
#define UCLIB_H
#ifdef DOUBLE_PRECISION
typedef double Real;
#else
typedef float Real;
#endif
typedef double CoordReal;

#ifdef __cplusplus
extern "C" {
#endif
#if defined(WIN32) || defined(_WINDOWS) || defined(_WINNT)
# define USERFUNCTION_EXPORT __declspec(dllexport)
# define USERFUNCTION_IMPORT __declspec(dllimport)
#else
# define USERFUNCTION_EXPORT
# define USERFUNCTION_IMPORT
#endif

extern void USERFUNCTION_IMPORT ucarg(void *, char *, char *, int);
extern void USERFUNCTION_IMPORT ucfunc(void *, char *, char *);
extern void USERFUNCTION_IMPORT ucfunction(void *, char *, char *, int, ...);

void USERFUNCTION_EXPORT uclib();
#ifdef __cplusplus
}
#endif
#endif