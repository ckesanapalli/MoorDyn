# StarCCM_MoorDyn
This is a user defined library to the couple MoorDyn to the StarCCM software.

# Code Structure
```
D:.
├───bin
│   └───windows
├───doc
│   └───validation_and_verification
│       └───reference
├───examples
│   ├───main
│   │   ├───01_boat_in_head_waves
│   │   └───02_4_column_semi_submersible
│   │       └───reference
│   └───testing
└───src
    ├───source
    │   ├───moordyn_coupler
    │   └───starccm_coupler
    └───VS
```
# Moordyn
This library uses MoorDyn V2 code for the Mooring Dynamics. This code is git cloned to src/source directory using git submodule. 

```
cd src/source
git submodule add https://github.com/FloatingArrayDesign/MoorDyn.git
git checkout v2
```

Build MoorDyn using
```
mkdir build
cd build
cmake -G "Visual Studio 17 2022" ..
```

# Star-CCM+
**Version:** Simcenter STAR-CCM+ 2302 Build 18.02.008 (win64/clang11.1vc14.2)

# Build
Visual Studio Community is used to compile the c, c++ files and generate the lib files for Star-CCM+.

**Version:** Visual Studio 2022. 

Link the objects into a Dynamic Link Library (DLL) using the UserFunctions.lib found in the compiler subdirectory of your Simcenter STAR-CCM+ installation directory:

`C:\Program Files\Siemens\18.02.008\STAR-CCM+18.02.008\star\lib\win64\clang11.1vc14.2\lib\UserFunctions.lib`

In Visual Studio Community, 



go to Project > Properties > Configuration Properties

1. Select All Configurations
2. General > 
   1. Output Directory: `..\..\bin\windows\$(Configuration)\`
   2. Configuration Type > Dynamic Library (.dll)
3. C/C++ > Command line and add the following to the Additional Options field: `/D_WINDOWS /EHsc`
4. Linker > Input > Additional Dependencies and add the following: `C:\Program Files\Siemens\18.02.008\STAR-CCM+18.02.008\star\lib\win64\clang11.1vc14.2\lib\UserFunctions.lib;`

Added MoorDyn library to the project using ref:https://eigen.tuxfamily.org/index.php?title=IDEs#Visual_Studio

Go to `Preferences > C/C++ > Coding Style > Organize Includes > Header Substitution`. There you can add a new rule, and import the following xml file:

