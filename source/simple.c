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
#include "MoorDyn2.h"

#ifdef __cplusplus
extern "C"
{
#endif
  void USERFUNCTION_EXPORT
    calculateForce(Real(*result)[3], int size, CoordReal(*position)[3],
      unsigned int* bodyId, CoordReal(*bodyPosition)[3])
  {
    int i, j;

    for (i = 0; i < size; ++i)
      for (j = 0; j < 3; ++j)
        result[i][j] = 0.; /* Calculate no additional moment. */

    const char* filename = "asd";
    //MoorDyn DynData = MoorDyn_Create(filename);
    MoorDyn dyn = MoorDyn_Create("asdasd");
    

  }


  void USERFUNCTION_EXPORT
    calculateMoment(Real(*result)[3], int size, CoordReal(*position)[3],
      unsigned int* bodyId, CoordReal(*bodyPosition)[3])
  {
    int i, j;

    for (i = 0; i < size; ++i)
      for (j = 0; j < 3; ++j)
        result[i][j] = 0.; /* Calculate no additional moment. */

  }

#ifdef __cplusplus
}
#endif