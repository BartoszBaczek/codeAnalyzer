#include "stdafx.h"
#include <iostream>
#include <string>
#include "FileReader.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	if (argv[1] != 0)
		FileReader fileReader(argv[1]);

	return 0;
}

