<<<<<<< HEAD
#include <algorithm>

#include "vowel.hpp"

void removeVowels(std::vector<std::string>& vec){
    std::string vow = "aeiouyAEIOUY";

    for(size_t i = 0; i < vec.size(); i++){
        auto& str = vec[i];
        for(const auto& letter : vow) {
            str.erase(std::remove(str.begin(), str.end(), letter), str.end());
=======
#include "vowel.hpp"

#include <algorithm>

std::string vowels{"aAeEiIoOuUyY"};

void removeVowels(std::vector<std::string>& vector) {
    for (auto& el : vector) {
        for (auto& vowel : vowels) {
            auto it = std::remove(el.begin(), el.end(), vowel);
            el.erase(it, el.end());
>>>>>>> 20759abaa103236f2c228474b7a2172b04975f99
        }
    }
}
