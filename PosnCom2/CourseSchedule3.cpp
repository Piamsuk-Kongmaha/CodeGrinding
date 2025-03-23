#include <bits/stdc++.h>
using namespace std;

int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(), [](const vector<int>& courseA, const vector<int>& courseB) {
            return courseA[1] < courseB[1];
        });
      
        priority_queue<int> maxHeap;
        int totalTime = 0; 
      
        for (auto& course : courses) {
            int duration = course[0];
            int deadline = course[1]; 
          
            maxHeap.push(duration);
            totalTime += duration;
          
            while (totalTime > deadline) {
                totalTime -= maxHeap.top();
                maxHeap.pop();
            }
        }        
    return maxHeap.size();
 }

 int main()
 {
    vector<vector<int>> courses = {{100,200} , {200, 1300}, {1000,1250}, {2000,3200}};
    cout << scheduleCourse(courses);
 }

