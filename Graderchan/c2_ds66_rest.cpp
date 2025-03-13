#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

struct TouristVisit {
    string name;
    int visitsBeforeCheckpointK;
    
    TouristVisit(string touristName, int priorVisits) 
        : name(touristName), visitsBeforeCheckpointK(priorVisits) {}
    
    bool operator<(const TouristVisit& other) const {
        if (visitsBeforeCheckpointK != other.visitsBeforeCheckpointK) {
            return visitsBeforeCheckpointK < other.visitsBeforeCheckpointK;
        }
        return name < other.name;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int totalTourists, targetCheckpoint;
    cin >> totalTourists >> targetCheckpoint;
    
    vector<TouristVisit> touristsWhoVisitedTargetCheckpoint;
    
    string line;
    getline(cin, line);
    
    for (int i = 0; i < totalTourists; i++) {
        getline(cin, line);
        stringstream lineStream(line);
        
        string touristName;
        lineStream >> touristName;
        
        int checkpoint;
        vector<int> visitedCheckpoints;
        
        while (lineStream >> checkpoint) {
            visitedCheckpoints.push_back(checkpoint);
        }
        
        bool visitedTargetCheckpoint = false;
        int checkpointsBeforeTarget = 0;
        
        for (int cp : visitedCheckpoints) {
            if (cp == targetCheckpoint) {
                visitedTargetCheckpoint = true;
                break;
            }
            checkpointsBeforeTarget++;
        }
        
        if (visitedTargetCheckpoint) {
            touristsWhoVisitedTargetCheckpoint.push_back(
                TouristVisit(touristName, checkpointsBeforeTarget)
            );
        }
    }
    
    sort(touristsWhoVisitedTargetCheckpoint.begin(), 
         touristsWhoVisitedTargetCheckpoint.end());
    
    if (touristsWhoVisitedTargetCheckpoint.empty()) {
        cout << "-1" << endl;
    } else {
        const int MAX_TOURISTS_TO_SHOW = 3;
        int touristsToShow = min(
            static_cast<int>(touristsWhoVisitedTargetCheckpoint.size()), 
            MAX_TOURISTS_TO_SHOW
        );
        
        for (int i = 0; i < touristsToShow; i++) {
            if (i > 0) cout << " ";
            cout << touristsWhoVisitedTargetCheckpoint[i].name;
        }
        cout << endl;
    }
    
    return 0;
}