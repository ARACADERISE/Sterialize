#pragma once
#include <ntdef.h>

typedef struct{
    ULONG X;
    ULONG Y;
}KSYSTEM_CURSOR, *PKSYSTEM_CURSOR;

#define MOUSE_LEFT_CLICK 1
#define MOUSE_MIDDLE_CLICK 2
#define MOUSE_RIGHT_CLICK 3

KSYSTEM_CURSOR KiSystemCursor;

VOID
KeInitializeMouse();