/* 
 *	HT Editor
 *	ilstruct.h
 *
 *	Copyright (C) 1999-2002 Stefan Weyergraf (stefan@weyergraf.de)
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License version 2 as
 *	published by the Free Software Foundation.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with this program; if not, write to the Free Software
 *	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __ILSTRUCT_H_
#define __ILSTRUCT_H_

#include "global.h"

#define IL_MAGIC0_0	'B'
#define IL_MAGIC0_1	'S'
#define IL_MAGIC0_2	'J'
#define IL_MAGIC0_3	'B'

#define IL_MAGIC1_0	'C'
#define IL_MAGIC1_1	'O'
#define IL_MAGIC1_2	'M'
#define IL_MAGIC1_3	'+'

struct IL_METADATA_SECTION {
	dword magic HTPACKED;
	word major_version HTPACKED;
	word minor_version HTPACKED;
	// if (minor_version==1) {
	//    dword unkown HTPACKED;
	//    dword version_string_length HTPACKED;	
	//    char version_string[align(version_string_length, 4)];
	// }
	// byte zero1, zero2; 
	// word number_of_entries; 
};

struct IL_METADATA_SECTION_ENTRY {
	dword offset HTPACKED;
	dword size HTPACKED;
	//char name[]; // zero_terminated
	// align(4)
	// dword ref ?;
};

extern byte IL_METADATA_SECTION_struct[];
extern byte IL_METADATA_SECTION_ENTRY_struct[];
#endif
