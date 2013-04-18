#include <stdio.h>
#include <tchar.h>
#include <time.h>
#include <iostream>
#include <openssl\opensslv.h>


int _tmain(int argc, _TCHAR* argv[])
{
	printf("%s",OPENSSL_VERSION_TEXT );

	time_t t = time(NULL);
	printf("\n\nRun completed at: %s",ctime(&t));
	
	char c;
	std::cin >> std::noskipws >> c;
	return 0;

}

