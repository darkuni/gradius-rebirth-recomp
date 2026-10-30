// First-run game setup from the player's own WAD / disc image (see game_setup.cpp).
#pragma once
#include <string>
bool game_setup_from_wad(const std::string& wad_path, const std::string& dlc_path, const std::string& out_dir, std::string& err);
bool game_setup_from_disc(const std::string& image_path, const std::string& out_dir, std::string& err);
// 1 = game folder made, 0 = no WAD / image next to the exe, -1 = failed (err says why)
int game_setup_auto(const std::string& exedir, const std::string& game_dir, bool disc_game, std::string& err, std::string& used);
