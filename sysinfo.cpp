#include "sysinfo.h"
#include <QtGlobal>

#ifdef Q_OS_WIN
    #include "sysinfowindowsimpl.h"
#endif



SysInfo::SysInfo()
{

}

SysInfo &SysInfo::instance()
{
#ifdef Q_OS_WIN
    static SysInfoWindowsImpl singleton;
#endif
    return singleton;
}

SysInfo::~SysInfo()
{

}

