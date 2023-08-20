/*

1203. Sort Items by Groups Respecting Dependencies
Hard
1.4K
238
Companies

There are n items each belonging to zero or one of m groups where group[i] is the group that the i-th item belongs to and it's equal to -1 if the i-th item belongs to no group. The items and the groups are zero indexed. A group can have no item belonging to it.

Return a sorted list of the items such that:

    The items that belong to the same group are next to each other in the sorted list.
    There are some relations between these items where beforeItems[i] is a list containing all the items that should come before the i-th item in the sorted array (to the left of the i-th item).

Return any solution if there is more than one solution and return an empty list if there is no solution.

 

Example 1:

Input: n = 8, m = 2, group = [-1,-1,1,0,0,1,0,-1], beforeItems = [[],[6],[5],[6],[3,6],[],[],[]]
Output: [6,3,4,1,5,2,0,7]

Example 2:

Input: n = 8, m = 2, group = [-1,-1,1,0,0,1,0,-1], beforeItems = [[],[6],[5],[6],[3],[],[4],[]]
Output: []
Explanation: This is the same as example 1 except that 4 needs to be before 6 in the sorted list.

 

Constraints:

    1 <= m <= n <= 3 * 104
    group.length == beforeItems.length == n
    -1 <= group[i] <= m - 1
    0 <= beforeItems[i].length <= n - 1
    0 <= beforeItems[i][j] <= n - 1
    i != beforeItems[i][j]
    beforeItems[i] does not contain duplicates elements.


*/
/*
class Solution{
    bool topoSort(vector<int> adj[],vector<int> &topo,vector<int> &deg){
        queue<int> q;
        for(int i=0;i<deg.size();i++){
            if(deg[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            topo.push_back(curr);
            for(int v : adj[curr]){
                deg[v]--;
                if(deg[v]==0){
                    q.push(v);
                }
            }
        }
        return topo.size()==deg.size();
    }
public:
    vector<int> sortItems(int n, int m, vector<int>& group, vector<vector<int>>& beforeItems) {
        int k=m;
        for(auto &it : group){
            if(it==-1){
                it = k++;
            }
        }
        vector<int> ItemDeg(n,0);
        vector<int> ItemAdj[n];
        vector<int> GroupDeg(k,0);
        vector<int> GroupAdj[k];
        for(int v=0;v<n;v++){
            for(int u : beforeItems[v]){
                ItemAdj[u].push_back(v);
                ItemDeg[v]++;
                if(group[u] != group[v]){
                    GroupAdj[group[u]].push_back(group[v]);
                    GroupDeg[group[v]]++;
                }
            }
        }
        vector<int> fixedItems,fixedGroups;
        bool its=topoSort(ItemAdj,fixedItems,ItemDeg);
        bool grp=topoSort(GroupAdj,fixedGroups,GroupDeg);
        if(its==0 || grp==0) return {};
        unordered_map<int,vector<int>> mp;
        for(int it : fixedItems){
            mp[group[it]].push_back(it);
        }
        vector<int> ans;
        for(int grp : fixedGroups){
            vector<int> temp = mp[grp];
            for(auto it : temp){
                ans.push_back(it);
            }
        }
        return ans;
    }
};

*/