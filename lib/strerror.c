#include	<stdio.h>

#ifndef LINUX
//extern char	*sys_errlist[];
//#extern int	sys_nerr;
#endif

char *
strerror(int error)
{
	static char	mesg[30];

	if (error >= 0)
		return strerror(error);

	sprintf(mesg, "Unknown error (%d)", error);
	return(mesg);
}
