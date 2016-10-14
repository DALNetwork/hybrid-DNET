/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  $Id: version.c 685 2006-06-16 12:22:31Z michael $
 */

#include "patchlevel.h"
#include "serno.h"
#include "ircd.h"
#ifndef _WIN32
#include <sys/utsname.h>
#else
#include "s_bsd.h"
#endif

const char *ircd_version = PATCHLEVEL;
const char *serno = SERIALNUM;

char *
get_ircd_platform(char *str)
{
  struct utsname uts;

  uname(&uts);
  snprintf(str, PLATFORMLEN, "%s %s %s %s %s", uts.sysname, uts.nodename,
           uts.release, uts.version, uts.machine);
  return str;
}

const char *infotext[] =
{
  "============== Hybrid-DNET Information ====================",
  "| Based on the original code written by ircd-hybrid",
  "| Was development on DALNetwork Team",
  "| Copyright (c) 2015-2016 DALNetwork Development Group", 
  "| ",
  "| This release was brought to you by the following people:",
  "| ",
  "| Head Coder",
  "|   * Sugriwo Cengkok (RAFLY) <ircd@dalnetwork.org>",
  "| ",
  "| Coders:",
  "|   * Joni Irwanto (SodroN) <code@dalnetwork.org>",
  "| ",
  "| If you find any bugs, please report them at:",
  "|   Page : http://bugs.dalnetwork.org",
  "|   Email: bugs@dalnetwork.org",
  "| Hybrid-DNET Homepage: https://www.dalnetwork.org",
  "| ",
  "======================================================",0
  "", 0
};
