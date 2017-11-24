/**
 * @file   hunio.c
 * @author Andras Gerendas
 * @date   November, 2017
 * @brief  Kimeneti-bemeneti fuggvenyek implementacioja az stdio.h-bol
 */

#include "hunio.h"

#include "stdarg.h"
#include "stdio.h"

egesz
ird (allando betu* alak, ...)
{
	va_list vl;
	egesz ret;
	va_start(vl, alak);
	ret = vprintf(alak, vl);
	va_end(vl);
	vissza ret;
}

egesz
kerd (allando betu* alak, ...)
{
	va_list vl;
	egesz ret;
	va_start(vl, alak);
	ret = vscanf(alak, vl);
	va_end(vl);
	vissza ret;
}
