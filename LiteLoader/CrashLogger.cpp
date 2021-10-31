#include "CrashLogger.h"
#include "Config.h"
#include <Windows.h>
#include <Utils/Logger.h>
#include <Utils/WinHelper.h>

bool StartCrashLogger()
{
    STARTUPINFO si;
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    PROCESS_INFORMATION pi;

    SECURITY_ATTRIBUTES sa;
    sa.bInheritHandle = TRUE;
    sa.lpSecurityDescriptor = NULL;
    sa.nLength = sizeof(SECURITY_ATTRIBUTES);

    wchar_t daemonPath[MAX_PATH];

    wsprintf(daemonPath, L"%ls %u", DAEMON_PROCESS_PATH, GetCurrentProcessId());
    if (!CreateProcess(NULL, daemonPath, &sa, &sa, TRUE, 0, NULL, NULL, &si, &pi))
    {
        Logger::Error("Could not Create CrashLogger Daemon Process!");
        Logger::Error() << GetLastErrorMessage() << Logger::endl;
        return false;
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return true;
}