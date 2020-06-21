#pragma once
<<<<<<< HEAD

#include <array>
#include <vector>

constexpr char ASCIIno32 = ' ';
constexpr size_t width = 32;
constexpr size_t height = 32;

void printMap(const std::array<std::array<uint8_t, width>, height>& bitmap);
std::vector<std::pair<uint8_t, uint8_t>> compressGrayscale(const std::array<std::array<uint8_t, width>, height>&);
std::array<std::array<uint8_t, width>, height> decompressGrayscale(const std::vector<std::pair<uint8_t, uint8_t>>&);
=======
#include <array>
#include <vector>
constexpr size_t width = 32;
constexpr size_t height = 32;

std::vector<std::pair<uint8_t, uint8_t>> compressGrayscale(const std::array<std::array<uint8_t, width>, height>& arr);
std::array<std::array<uint8_t, width>, height> decompressGrayscale(const std::vector<std::pair<uint8_t, uint8_t>>& vec);
void printMap(const std::array<std::array<uint8_t, width>, height>& printMap);
>>>>>>> 20759abaa103236f2c228474b7a2172b04975f99
