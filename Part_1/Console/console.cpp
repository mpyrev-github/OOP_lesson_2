#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>
#include "ID.h"

int _tmain(int argc, _TCHAR* argv[]) 
{
	NameAndGroup();
	return 0;
}
