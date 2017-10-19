/*
  GPL
  (c) 2017, thorsten.johannvorderbrueggen@t-online.de

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

*/

#ifndef _LIBGAME_H_
#define _LIBGAME_H_

#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>

/* for libconfig */
#include <libconfig.h>

/* getopt and locale realted inc */
#include <getopt.h>
#include <libintl.h>
#include <locale.h>
#include "gettext.h"


/*
 * common macros
 * -------------
 */
#define eprintf(format, ...) fprintf (stderr, format, ##__VA_ARGS__)
#define _(string) gettext(string)

/* base frame rate */
#define FPS 60

/* deadzone for the joystick */
#define JOYSTICK_DEADZONE 10000




/*
 * --------------------------- other topics ------------------------------------
 */


/*
 * --------------------------- window related ----------------------------------
 */


/*
 * --------------------------- texture related ---------------------------------
 */


/*
 * --------------------------- game object related -----------------------------
 */


/*
 * --------------------------- collision related -------------------------------
 */


/*
 * --------------------------- 2d vector related -------------------------------
 */


/*
 * --------------------------- input related -----------------------------------
 */


#endif
