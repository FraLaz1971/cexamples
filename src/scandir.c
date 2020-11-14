/************************************************************************
 *
 * Purpose: List all files in the current directory.
 * Author:  M J Leslie
 * Date:    15-Apr-95
 *
 * Note:    1) This program uses NON ANSI STANDARD functions. You may
 *	       not find them on your platform.
 *	    2) The file names are NOT stored in any particular order.
 *
 ************************************************************************/
#define NULL '\0'
#include <dirent.h>			/* Directory information.	*/

int main(int argc, char **argv)
{
    DIR           *dir_p;
    struct dirent *dir_entry_p;
				/* Open the current directory		*/	
    dir_p = opendir(".");
				/* read each entry until NULL.		*/
    while( NULL != (dir_entry_p = readdir(dir_p)))
    {
				/* print the name of the file held in 
				 * this directory entry.		*/

        printf(" %s \n", dir_entry_p->d_name);
    }
				/* Tidy up.				*/
    closedir(dir_p);
}

