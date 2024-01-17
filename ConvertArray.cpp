#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    std::unordered_map<int, std::vector<int>> mp;

    // Assuming nums is a vector<int> containing some values
    std::vector<int> nums = {1, 2, 3, 1, 2, 3, 4};

    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]].push_back(i);
    }

    // Print the elements in the map
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        std::cout << "Key: " << it->first << ", Values: ";
        for (int j = 0; j < it->second.size(); j++) {
            std::cout << it->second[j];
            if (j < it->second.size() - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }

    int n=7;
    int cnt=0;
    int row=0;
    while(n>=cnt){
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            cnt++;
            std::cout<<it->second[row]<<" ";
        }
        std::cout<<std::endl;
        row++;
    }

    return 0;
}
