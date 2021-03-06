/*
  Garmintools software package
  Copyright (C) 2006-2008 Dave Bailey

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include "config.h"
#include <string.h>
#include <ctype.h>
#include "garmin.h"

/*
   This file contains functions that scan the output of the functions in
   print.c, reconstructing Garmin datatypes from the XML output.
*/


static void
garmin_scan_attribute ( const char ** cursor, const char * name, char ** val )
{

}


static void
garmin_scan_type ( const char ** cursor, uint32 * type )
{
  *type = 0;

  /* Expect a string 'type="xxx"' */


}


static void
garmin_scan_position ( )
{

}


