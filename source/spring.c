// Copyright (c) 2023 Chaitanya Kesanapalli <ckesanapalli@gmail.com>
//
// This file is part of the coupling Moordyn solver to the StarCCM+ software.
// 
// Description: 
//     This file contains the coupling function from MoorDyn to StarCCM+.
//
// Reference: 
//     User Guide. "StarCCM+ 2302" SIEMENS simcenter (2023).

//#include "uclib.h"

//void USERFUNCTION_EXPORT
//calculateForce(Real(*result)[3], int size, CoordReal(*position)[3],
//  unsigned int* bodyId, CoordReal(*bodyPosition)[3])
//{
//  CoordReal delta[3];
//  Real stiffness = 2e3; /* Spring stiffness */
//  int j;
//
//  if (size != 2) /* If the number of end points is unequal 2, do not execute the following coding. */
//    /* This if-block is essential for parallel simulations. The DFBI point */
//    /* set is filled with the two end points on the master node only. */
//
//    return;
//
//  for (j = 0; j < 3; ++j) /* Compute force vectors at the end points */
//  {
//    delta[j] = position[1][j] - position[0][j];
//    result[1][j] = -stiffness * (float)delta[j]; /* Force at second end point */
//    result[0][j] = -result[1][j]; /* Force at first end point */
//  }
//}
//
//void USERFUNCTION_EXPORT
//calculateMoment(Real(*result)[3], int size, CoordReal(*position)[3],
//  unsigned int* bodyId, CoordReal(*bodyPosition)[3])
//{
//  int i, j;
//
//  for (i = 0; i < size; ++i)
//    for (j = 0; j < 3; ++j)
//      result[i][j] = 0.; /* Calculate no additional moment. */
//
//  const char* infilename = "asd";
//
//}
//
