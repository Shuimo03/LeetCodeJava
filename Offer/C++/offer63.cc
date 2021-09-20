#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    int maxProfit(vector<int>prices){
        int cost = INT_MAX, profit = 0;
        for(int price: prices){
            cost  = min(cost,price);
            profit = max(profit,price-cost);
        }
        return profit;
    }
}