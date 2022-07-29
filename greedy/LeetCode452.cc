#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() == 0){
            return 0;
        }
        sort(points.begin(),points.end(),[](const vector<int> &u,const vector<int>& v){
            return u[1] < v[1];
        });

        int pos = points[0][1];
        int ans = 1;
        for(const vector<int>& ballon: points){
            if(ballon[0] > pos){
                pos = ballon[1];
                ++ans;
            }
        }
        return ans;
    }
};