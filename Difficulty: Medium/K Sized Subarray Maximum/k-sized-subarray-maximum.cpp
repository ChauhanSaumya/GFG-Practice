class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        deque<int> q;
    vector<int> res;
    for(int i=0;i<arr.size();i++){
        while(!q.empty() && q.front()<=i-k) q.pop_front();
        while(!q.empty() && arr[q.back()]<=arr[i]) q.pop_back();
        q.push_back(i);
        if(i>=k-1) res.push_back(arr[q.front()]);
    }
    return res;
    }
};