#include "pch.h"
#include "hooks.h"

namespace Hooks
{
	MSG_EngineErrorFn originalMSG_EngineError = nullptr;
}

//-----------------------------------------------------------------------------
// Engine Error message box
//-----------------------------------------------------------------------------

int Hooks::MSG_EngineError(char* fmt, va_list args)
{
	printf("\nENGINE ERROR #####################################\n");
	vprintf(fmt, args);

	return originalMSG_EngineError(fmt, args);
}