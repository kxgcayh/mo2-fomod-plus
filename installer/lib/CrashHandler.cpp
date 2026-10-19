#include "CrashHandler.h"

// Process-wide SEH is managed by the host process (MO2); plugins should not override host exception handlers.
void CrashHandler::initialize() {}
void CrashHandler::cleanup() {}
