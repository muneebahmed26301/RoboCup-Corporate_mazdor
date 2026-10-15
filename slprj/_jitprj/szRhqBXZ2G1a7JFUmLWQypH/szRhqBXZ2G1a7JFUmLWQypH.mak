#------------------------ Tool Specifications & Options ----------------------

COMPILER  =  msvc170

CC        =  "cl.exe"
LD        =  "link.exe"
LIBCMD    =  "link.exe"
CFLAGS    =  /c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /DMATLAB_MEX_FILE /D_SECURE_SCL=0 /nologo /MD /Zi /DNDEBUG /O2
LDFLAGS   =  /nologo /DLL /MANIFEST:NO /OPT:NOREF /NOIMPLIB /NOEXP /MACHINE:X64 /LIBPATH:"C:\Program Files\MATLAB\R2025b\extern\lib\win64\microsoft" libmex.lib libmx.lib /INCREMENTAL:NO

OBJECTS = \
	   szRhqBXZ2G1a7JFUmLWQypH.obj \
	   half_type.obj \

STATICLIBS = \
	   "sf_runtime.lib" \
	   "libcovrt.lib" \
	   "libemlrt.lib" \
	   "libmwblas.lib" \
	   "libmwcgxert.lib" \
	   "libmwlapack.lib" \
	   "libmwmathutil.lib" \
	   "libmwsl_sfcn_cov_bridge.lib" \
	   "libmwslexec_simlog.lib" \
	   "libmwstringutil.lib" \
	   "libut.lib" \
	   "C:\Program Files\MATLAB\R2025b\extern\lib\win64\microsoft\libmwkdtree.lib" \

#------------------------------ Include/Lib Path ------------------------------

INCLUDE_PATH = \
     /I"C:\Program Files\MATLAB\R2025b\extern\include" \
     /I"C:\Program Files\MATLAB\R2025b\simulink\include" \
     /I"C:\Users\ataul\Desktop\RoboCup\RoboCup_ARM\RoboCup_ARM\slprj\_jitprj\szRhqBXZ2G1a7JFUmLWQypH" \
     /I"C:\Users\ataul\Desktop\RoboCup\RoboCup_ARM\RoboCup_ARM" \

#--------------------------------- Rules --------------------------------------

szRhqBXZ2G1a7JFUmLWQypH.dll : $(MAKEFILE) $(OBJECTS)
	$(LD) $(LDFLAGS) /OUT:szRhqBXZ2G1a7JFUmLWQypH.dll $(OBJECTS)  $(STATICLIBS) 
szRhqBXZ2G1a7JFUmLWQypH.obj :	C:\Users\ataul\Desktop\RoboCup\ROBOCU~1\ROBOCU~1\slprj\_jitprj\SZRHQB~1\SZRHQB~1.C
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ataul\Desktop\RoboCup\RoboCup_ARM\RoboCup_ARM\slprj\_jitprj\szRhqBXZ2G1a7JFUmLWQypH\szRhqBXZ2G1a7JFUmLWQypH.c"
half_type.obj :	C:\Users\ataul\Desktop\RoboCup\ROBOCU~1\ROBOCU~1\slprj\_jitprj\SZRHQB~1\HALF_T~1.C
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Users\ataul\Desktop\RoboCup\RoboCup_ARM\RoboCup_ARM\slprj\_jitprj\szRhqBXZ2G1a7JFUmLWQypH\half_type.c"
