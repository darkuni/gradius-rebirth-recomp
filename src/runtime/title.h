#pragma once
#include <cstdint>
#include <string>
#include <vector>
struct TitleContent { uint32_t id; uint16_t index, type; uint64_t size; std::string path; };
struct Title {
    std::string root;
    std::vector<uint8_t> tmd, ticket;
    uint64_t title_id = 0, ios_id = 0;
    uint16_t group_id = 0, title_version = 0, boot_index = 0;
    std::vector<TitleContent> contents;
};
extern Title g_title;
bool title_init(const char* root);
const TitleContent* title_content(uint32_t index);
std::vector<uint8_t> title_tmd_view();
std::vector<uint8_t> title_ticket_view();
