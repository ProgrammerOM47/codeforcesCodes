#include <iostream>
#include <vector>
#include <list>
#include <map>

int main() {
    std::vector<std::vector<int>> edges = {{0, 3}, {0, 4}, {1, 3}, {2, 4}, {2, 7}, {3, 5}, {3, 6}, {3, 7}, {4, 6}};

    std::map<int, std::list<int>> mp;

    for (int row = 0; row < edges.size(); ++row) {
        mp[edges[row][0]].push_back(edges[row][1]);
    }

    // Finding an element in the map
    int keyToFind = 3;
    auto it = mp.find(keyToFind);

    if (it != mp.end()) {
        std::cout << "Key found: " << it->first << ", Values: ";
        for (const auto &value : it->second) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Key not found." << std::endl;
    }

    return 0;
}
