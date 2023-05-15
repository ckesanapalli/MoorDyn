// Copyright (c) 2023 Chaitanya Kesanapalli <ckesanapalli@gmail.com>
//
// This file is part of the coupling Moordyn solver to the StarCCM+ software.
// 
// Description: 
//     This file contains the coupling function from MoorDyn to StarCCM+.
//
// Reference: 
//     User Guide. "StarCCM+ 2302" SIEMENS simcenter (2023).

#include "uclib.h"

 //#ifdef __cplusplus
 //extern "C" {
 //#endif


void calculateForce(Real*, int, CoordReal*, unsigned int*, CoordReal*);
void calculateMoment(Real*, int, CoordReal*, unsigned int*, CoordReal*);

void
USERFUNCTION_EXPORT uclib()
{
/* Register user functions here */
ucfunc(calculateForce, "PointSetProfile", "Calculate Force");
ucarg(calculateForce, "Point", "Coord", sizeof(CoordReal[3]));
ucarg(calculateForce, "Point", "BodyId", sizeof(unsigned int));
ucarg(calculateForce, "Point", "BodyPosition", sizeof(CoordReal[3]));

ucfunc(calculateMoment, "PointSetProfile", "Calculate Moment");
ucarg(calculateMoment, "Point", "Coord", sizeof(CoordReal[3]));
ucarg(calculateMoment, "Point", "BodyId", sizeof(unsigned int));
ucarg(calculateMoment, "Point", "BodyPosition", sizeof(CoordReal[3]));
}

 //#ifdef __cplusplus
 //}
 //#endif