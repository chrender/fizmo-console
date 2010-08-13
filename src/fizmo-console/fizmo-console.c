
/* simple_c.c
 *
 * This file is part of fizmo.
 *
 * Copyright (c) 2010 Christoph Ender.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#include <fizmo/interpreter/fizmo.h>
#include <fizmo/interpreter/text.h>
#include <fizmo/tools/types.h>
#include <fizmo/tools/i18n.h>
#include <fizmo/tools/tracelog.h>

static char* interface_name = "simple-c";
static char* interface_version = "0.7.0-b1";

char *simple_c_get_interface_name()
{ return interface_name; }

bool simple_c_return_false()
{ return false; }

bool simple_c_return_true()
{ return true; }

uint8_t simple_c_get_screen_height()
{ return 24; }

uint8_t simple_c_get_screen_width()
{ return 80; }

uint8_t simple_c_return_1()
{ return 1; }

z_colour simple_c_get_default_foreground_colour()
{ return Z_COLOUR_BLACK; }

z_colour simple_c_get_default_background_colour()
{ return Z_COLOUR_WHITE; }

uint8_t simple_c_return_0()
{ return 0; }

int simple_c_parse_config_parameter(char *key, char *value)
{ return 1; }

void simple_c_link_interface_to_story(struct z_story *story)
{ }

void simple_c_reset_interface()
{ }

int simple_c_close_interface(z_ucs *error_message)
{ return 0; }

void simple_c_set_buffer_mode(uint8_t new_buffer_mode)
{ }

void simple_c_interface_output_z_ucs(z_ucs *z_ucs_output)
{
  while (*z_ucs_output != 0)
  {
    if ((*z_ucs_output & 0xffffff80) != 0)
      putchar('?');
    else
      putchar((char)*z_ucs_output);

    z_ucs_output++;
  }
}

int16_t simple_c_interface_read_line(zscii *dest, uint16_t maximum_length,
    uint16_t tenth_seconds, uint32_t verification_routine,
    uint8_t preloaded_input, int *tenth_seconds_elapsed,
    bool disable_command_history, bool return_on_escape)
{
  int input;
  int current_length = 0;
  uint8_t input_size = 0;
  zscii input_zscii;

  if ((input = fgetc(stdin)) == EOF)
    exit(-1);

  while ((input != 10) && (input != 13))
  {
    if (current_length < maximum_length)
    {
      input_zscii = unicode_char_to_zscii_input_char(input & 0xff);

      if ((input_zscii == 0xff) || (input_zscii == 27))
        input_zscii = '?';

      *(dest++) = input_zscii;

      input_size++;
    }

    if ((input = fgetc(stdin)) == EOF)
      exit(-1);
  }

  return input_size;
}

int simple_c_interface_read_char(uint16_t tenth_seconds,
    uint32_t verification_routine, int *tenth_seconds_elapsed)
{
  exit(-1);
}

void simple_c_show_status(z_ucs *room_description, int status_line_mode,
    int16_t parameter1, int16_t parameter2)
{ }

void simple_c_set_text_style(z_style text_style)
{ }

void simple_c_set_colour(z_colour foreground, z_colour background,
    int16_t window)
{ }

void simple_c_set_font(z_font font_type)
{ }

void simple_c_split_window(int16_t nof_lines)
{ }

void simple_c_set_window(int16_t window_number)
{ }

void simple_c_erase_window(int16_t window_number)
{ }

void simple_c_set_cursor(int16_t line, int16_t column, int16_t window)
{ }

uint16_t simple_c_get_cursor_row()
{ return 0; }

uint16_t simple_c_get_cursor_column()
{ return 0;}

void simple_c_erase_line_value(uint16_t start_position)
{ }

void simple_c_erase_line_pixels(uint16_t start_position)
{ }

void simple_c_output_interface_info()
{
  (void)streams_latin1_output(interface_name);
  (void)streams_latin1_output(" interface version ");
  (void)streams_latin1_output(interface_version);
  (void)streams_latin1_output("\n");
}

struct z_screen_interface simple_c_interface =
{
  &simple_c_get_interface_name,
  &simple_c_return_false,
  &simple_c_return_false,
  &simple_c_return_false,
  &simple_c_return_false,
  &simple_c_return_false,
  &simple_c_return_false,
  &simple_c_return_false,
  &simple_c_return_true,
  &simple_c_return_false,
  &simple_c_return_false,
  &simple_c_return_false,
  &simple_c_return_false,
  &simple_c_get_screen_height,
  &simple_c_get_screen_width,
  &simple_c_get_screen_height,
  &simple_c_get_screen_width,
  &simple_c_return_1,
  &simple_c_return_1,
  &simple_c_get_default_foreground_colour,
  &simple_c_get_default_background_colour,
  &simple_c_return_0,
  &simple_c_parse_config_parameter,
  &simple_c_link_interface_to_story,
  &simple_c_reset_interface,
  &simple_c_close_interface,
  &simple_c_set_buffer_mode,
  &simple_c_interface_output_z_ucs,
  &simple_c_interface_read_line,
  &simple_c_interface_read_char,
  &simple_c_show_status,
  &simple_c_set_text_style,
  &simple_c_set_colour,
  &simple_c_set_font,
  &simple_c_split_window,
  &simple_c_set_window,
  &simple_c_erase_window,
  &simple_c_set_cursor,
  &simple_c_get_cursor_row,
  &simple_c_get_cursor_column,
  &simple_c_erase_line_value,
  &simple_c_erase_line_pixels,
  &simple_c_output_interface_info,
  &simple_c_return_false
};


int main(int argc, char *argv[])
{
  turn_on_trace();

  fizmo_register_screen_interface(&simple_c_interface);

  if (argc != 2)
    exit(1);

  fizmo_start(argv[1], NULL, NULL);

  return 0;
}

