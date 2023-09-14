/*
332. Reconstruct Itinerary
Solved
Hard
Topics
Companies

You are given a list of airline tickets where tickets[i] = [fromi, toi] represent the departure and the arrival airports of one flight. Reconstruct the itinerary in order and return it.

All of the tickets belong to a man who departs from "JFK", thus, the itinerary must begin with "JFK". If there are multiple valid itineraries, you should return the itinerary that has the smallest lexical order when read as a single string.

    For example, the itinerary ["JFK", "LGA"] has a smaller lexical order than ["JFK", "LGB"].

You may assume all tickets form at least one valid itinerary. You must use all the tickets once and only once.

 

Example 1:

Input: tickets = [["MUC","LHR"],["JFK","MUC"],["SFO","SJC"],["LHR","SFO"]]
Output: ["JFK","MUC","LHR","SFO","SJC"]

Example 2:

Input: tickets = [["JFK","SFO"],["JFK","ATL"],["SFO","ATL"],["ATL","JFK"],["ATL","SFO"]]
Output: ["JFK","ATL","JFK","SFO","ATL","SFO"]
Explanation: Another possible reconstruction is ["JFK","SFO","ATL","JFK","ATL","SFO"] but it is larger in lexical order.

 

Constraints:

    1 <= tickets.length <= 300
    tickets[i].length == 2
    fromi.length == 3
    toi.length == 3
    fromi and toi consist of uppercase English letters.
    fromi != toi


*/
/*
class Solution {
private:
    // Create an adjacency list to represent the flights
    unordered_map<string, vector<string>> flightGraph;
    
    // Store the final itinerary
    vector<string> itinerary;

public:

    // Depth-First Search to traverse the flight itinerary
    void dfs(string airport) {
        vector<string> &destinations = flightGraph[airport];
        
        // Visit destinations in lexical order
        while (!destinations.empty()) {
            string nextDestination = destinations.back();
            destinations.pop_back();
            dfs(nextDestination);
        }
        
        // Add the current airport to the itinerary after visiting all destinations
        itinerary.push_back(airport);
    }

    vector<string> findItinerary(vector<vector<string>>& tickets) {
        // Populate the flight graph using ticket information
        for (int i = 0; i < tickets.size(); i++) {
            string from = tickets[i][0];
            string to = tickets[i][1];

            flightGraph[from].push_back(to);
        }
        
        // Sort destinations in reverse order to visit lexical smaller destinations first
        for (auto &entry : flightGraph) {
            sort(entry.second.rbegin(), entry.second.rend());
        }
        
        // Start the DFS from the JFK airport
        dfs("JFK");
        
        // Reverse the itinerary to get the correct order
        reverse(itinerary.begin(), itinerary.end());
        
        return itinerary;
    }
};

*/