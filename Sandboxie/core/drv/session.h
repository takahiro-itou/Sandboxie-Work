/*
 * Copyright 2004-2020 Sandboxie Holdings, LLC 
 * Copyright 2020 David Xanatos, xanasoft.com
 *
 * This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

//---------------------------------------------------------------------------
// Session Management
//---------------------------------------------------------------------------


#ifndef _MY_SESSION_H
#define _MY_SESSION_H


#include "driver.h"
#include "box.h"


//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------


BOOLEAN Session_Init(void);

void Session_Unload(void);

void Session_Cancel(HANDLE ProcessId);

BOOLEAN Session_IsForceDisabled(ULONG SessionId);

void Session_MonitorPut(USHORT type, const WCHAR *name, HANDLE pid);

void Session_MonitorPutEx(USHORT type, const WCHAR** strings, HANDLE pid);


//---------------------------------------------------------------------------
// Variables
//---------------------------------------------------------------------------


extern volatile LONG Session_MonitorCount;


//---------------------------------------------------------------------------


#endif // _MY_SESSION_H
