#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> result;
        int start = intervals[0][0];
        int end = intervals[0][1];

        for (int i = 0; i<intervals.size();i++){
            int istart = intervals[i][0];
            int iend = intervals[i][1];
            //start of i is less than end -> merge
            if (istart <= end){
                    start = min(istart,start);
                    end = max(iend, end);
            }

            //start of i is greater than end -> new interval
            else{
                result.push_back({start,end});
                start = istart;
                end = iend;
            }
        }
        result.push_back({start, end});
        return result;
    }

int main(){
    vector<vector<int>> inp {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> res = merge(inp);
    cout<<res.size()<<endl;
    cout<<inp.size()<<endl;
    cout<<res[2][0];
    cout<<res[2][1];
}