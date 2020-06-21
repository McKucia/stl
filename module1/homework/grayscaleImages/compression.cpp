#include "compression.hpp"

#include <iostream>

<<<<<<< HEAD
void printMap(const std::array<std::array<uint8_t, width>, height>& bitmap) {

    for (const auto& arr : bitmap) {
        for (auto& el : arr) {
            if (el <= ASCIIno32)
                std::cout << " ";
            else
                std::cout << el;
        }
        std::cout << "\n";
    }
}

std::vector<std::pair<uint8_t, uint8_t>> compressGrayscale(const std::array<std::array<uint8_t, width>, height>& grayScale) {
    std::vector<std::pair<uint8_t, uint8_t>> compressed;
    compressed.reserve(width * height);
    int count = 0;
    int tmp = 0;

    for(const auto& row : grayScale){
        auto _prev = row.at(0);
        for(const auto& column : row){
            if(_prev == column) {
                count++;
                _prev = column;
                continue;
            }
            compressed.push_back(std::make_pair(_prev, count));
            _prev = column;
            count = 1;
        }
        compressed.push_back(std::make_pair(_prev, count));
        count = 0;
    }

    compressed.shrink_to_fit();

    return compressed;
}

std::array<std::array<uint8_t, width>, height> decompressGrayscale(const std::vector<std::pair<uint8_t, uint8_t>>& compressed ){
    std::array<std::array<uint8_t, width>, height> decompressed;
    std::array<uint8_t , width> tmpArray;
    int i = 0, j = 0;

    for(const auto& pair : compressed){
        for(int count = 0; count < pair.second; count++){
            tmpArray[i++] = pair.first;
        }
        if(i == width){
            decompressed[j++] = tmpArray;
            i = 0;
        }
    }

    return decompressed;
}
=======
std::vector<std::pair<uint8_t, uint8_t>> compressGrayscale(const std::array<std::array<uint8_t, width>, height>& arr) {
    std::vector<std::pair<uint8_t, uint8_t>> vec;
    uint8_t count;
    uint8_t current;
    for (const auto& el1 : arr) {
        count = 0;
        current = el1.at(0);
        for (const auto& el2 : el1) {
            if (current == el2) {
                count++;
            } else {
                vec.push_back(std::make_pair(current, count));
                count = 1;
                current = el2;
            }
        }
        vec.push_back(std::make_pair(current, count));
    }
    return vec;
}
std::array<std::array<uint8_t, width>, height> decompressGrayscale(const std::vector<std::pair<uint8_t, uint8_t>>& vec) {
    std::array<std::array<uint8_t, width>, height> arr;
    uint8_t count;
    uint8_t current = 0;
    for (const auto& el1 : vec) {
        if (count >= width) {
            count = 0;
            ++current;
        }
        for (size_t i = count; i < count + el1.second; i++) {
            arr[current][i] = el1.first;
        }
        count += el1.second;
    }

    return arr;
}

void printMap(const std::array<std::array<uint8_t, width>, height>& printMap) {
    for (const auto& el1 : printMap) {
        for (const auto& el2 : el1) {
            std::cout << el2;
        }
        std::cout << '\n';
    }
}
>>>>>>> 20759abaa103236f2c228474b7a2172b04975f99
