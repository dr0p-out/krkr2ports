//---------------------------------------------------------------------------
/*
	TVP2 ( T Visual Presenter 2 )  A script authoring tool
	Copyright (C) 2000 W.Dee <dee@kikyou.info> and contributors

	See details of license at "license.txt"
*/
//---------------------------------------------------------------------------
// System Initialization and Uninitialization
//---------------------------------------------------------------------------
#ifndef SysInitImplH
#define SysInitImplH

//---------------------------------------------------------------------------
extern void TVPDumpHWException();

extern void TVPInitializeBaseSystems();

#ifdef TJS_SUPPORT_VCL
extern AnsiString TVPNativeProjectDir;
extern AnsiString TVPNativeDataPath;
#endif

extern bool TVPProjectDirSelected;
extern bool TVPSystemIsBasedOnNT;
extern bool TVPCheckCmdDescription(void);
extern void TVPEnsureDataPathDirectory();


extern bool TVPExecuteUserConfig();

extern bool TVPTerminated;
extern bool TVPTerminateOnWindowClose;
extern bool TVPTerminateOnNoWindowStartup;

//---------------------------------------------------------------------------


#include "SysInitIntf.h"

#endif
