#include "sort.hpp"

<<<<<<< HEAD
std::deque<std::string> lengthSort(std::forward_list<std::string>& forwardList){
    std::deque<std::string> dq;
    auto it = dq.begin();

    for(const auto& word : forwardList){
        for(it = dq.begin(); it != dq.end(); it++)
            if (it->size() > word.size() || it->size() == word.size() && *it > word)
                break;
        dq.insert(it, word);
    }
    return dq;
}
=======
#include <functional>

std::deque<std::string> lengthSort(std::forward_list<std::string> mail) {
    std::deque<std::string> vec;
    mail.sort(std::greater<std::string>());
    for (const auto& el : mail) {
        vec.push_front(el);
    }
    return vec;
}
>>>>>>> 20759abaa103236f2c228474b7a2172b04975f99
