//
//  main.cpp
//  posn_day3_2026
//
//  Created by AdaBrain on 17/3/2569 BE.
//
#include <iostream>

using namespace std;

void p02_solution() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int profits = 0;
    
    for (int i = 1; i < (int) prices.size(); i++) {
        if (prices[i] > prices[i - 1]) {
            profits += prices[i] - prices[i - 1];
        }
    }
    
    cout << "Max Profit : " << profits << endl;
}

void p06_solution() {
    int n = 4;
    vector<string> nums = {"3", "30", "34", "5", "9"};
    
    sort(nums.begin(), nums.end(), [](string& a, string& b){
        return a + b > b + a;
    });
    
    if (nums[0] == "0") {
        cout << 0 << endl;
        return;
    }
    for (auto s : nums) {
        cout << s;
    }
    cout << endl;
}

void p09_solution() {
    int n = 5;
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    
    int total_tank = 0;
    int cur_tank = 0;
    int start = 0;
    
    for (int i = 0; i < n; i++) {
        int diff = gas[i] - cost[i];
        total_tank += diff;
        cur_tank += diff;
        
        if (cur_tank < 0) {
            start = i + 1;
            cur_tank = 0;
        }
    }
    
    cout << (total_tank >= 0 ? start : -1) << endl;
}

void p14_solution() {
    int n = 4;
    n = 2*n;
    vector<pair<int, int>> costs = {
        {10, 20},
        {30, 200},
        {400, 50},
        {30, 20}
    };
    
    sort(costs.begin(), costs.end(), [](auto& a, auto& b) {
        return (a.first - a.second) < (b.first - b.second);
    });
    
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (i < n/2) {
            total += costs[i].first;
        } else {
            total += costs[i].second;
        }
    }
    
    cout << "minimum cost : " << total << endl;
    
}

int main(int argc, const char * argv[]) {
    p09_solution();
    
    return EXIT_SUCCESS;
}

