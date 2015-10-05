// GB Enhanced+ Copyright Daniel Baxter 2014
// Licensed under the GPLv2
// See LICENSE.txt for full license text

// File : config.h
// Date : September 20, 2014
// Description : GBE+ configuration options
//
// Parses command-line arguments to configure GBE options

#ifndef EMU_CONFIG
#define EMU_CONFIG

#include <vector>
#include <string>
#include <sstream>

#include "common.h"

void reset_dmg_colors();
void validate_system_type();
bool parse_cli_args();
void parse_filenames();
bool parse_ini_file();

namespace config
{ 
	extern std::string rom_file;
	extern std::string bios_file;
	extern std::string save_file;
	extern std::string dmg_bios_path;
	extern std::string gbc_bios_path;
	extern std::string agb_bios_path;
	extern std::vector <std::string> cli_args;

	extern int agb_key_a, agb_key_b, agb_key_start, agb_key_select, agb_key_up, agb_key_down, agb_key_left, agb_key_right, agb_key_r_trigger, agb_key_l_trigger;
	extern int agb_joy_a, agb_joy_b, agb_joy_start, agb_joy_select, agb_joy_up, agb_joy_down, agb_joy_left, agb_joy_right, agb_joy_r_trigger, agb_joy_l_trigger;
	extern int dmg_key_a, dmg_key_b, dmg_key_start, dmg_key_select, dmg_key_up, dmg_key_down, dmg_key_left, dmg_key_right;
	extern int dmg_joy_a, dmg_joy_b, dmg_joy_start, dmg_joy_select, dmg_joy_up, dmg_joy_down, dmg_joy_left, dmg_joy_right;
	extern int dead_zone;

	extern u32 flags;
	extern bool pause_emu;
	extern bool use_bios;
	extern bool use_opengl;
	extern bool use_debugger;
	extern bool turbo;
	extern u8 scaling_factor;
	extern std::stringstream title;
	extern u8 gb_type;
	extern bool gba_enhance;
	extern bool sdl_render;

	extern u8 volume;
	extern double sample_rate;
	extern bool mute;

	extern u32 sys_width;
	extern u32 sys_height;

	extern u32 DMG_BG_PAL[4];
	extern u32 DMG_OBJ_PAL[4][2];

	//Function pointer for external rendering
	//This function is provided by frontends that will not rely on SDL
	extern void (*render_external)(std::vector<u32>&);
}

#endif // EMU_CONFIG