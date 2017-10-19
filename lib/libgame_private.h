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
  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
*/

#ifndef _LIBGAME_PRIVATE_H_
#define _LIBGAME_PRIVATE_H_

#define LIGGAME_EXPORT __attribute__ ((visibility ("default")))
#define LIGGAME_LOCAL __attribute__ ((visibility ("hidden")))

#define err_sdl_and_ret(err_txt, ret_val) do {			\
		fprintf(stderr, err_txt " (%s)\n",		\
			SDL_GetError());			\
		return ret_val;					\
	}							\
	while(0)

#define err_and_ret(err_txt, ret_val) do {			\
		fprintf(stderr, err_txt "\n");			\
		return ret_val;					\
	}							\
	while(0)


/*
 * draw a texture
 */
//LIGGAME_LOCAL void
//draw_texture(game_obj_data_t *obj, SDL_Renderer *renderer);


#endif
