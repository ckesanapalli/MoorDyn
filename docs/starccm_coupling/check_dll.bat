# Run this script in x64 Native Tools Command Prompt for VS 2022
cd bin/windows/Release
copy StarCCM_Moordyn.dll StarCCM_Moordyn_temp.dll
dumpbin/exports StarCCM_Moordyn_temp.dll
del StarCCM_Moordyn_temp.dll
cd ../../../