#include<bits/stdc++.h>
using namespace std;
class MedianFinder {
    priority_queue <int, vector<int>, greater<int> > minHeap;
    priority_queue <int> maxHeap;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxHeap.empty() or maxHeap.top()>=num){
            maxHeap.push(num);
        }
        else
            minHeap.push(num);
        if(maxHeap.size()>minHeap.size()+1){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        else if(maxHeap.size()<minHeap.size()){
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    
    double findMedian() {
        if(maxHeap.size()==minHeap.size()){
            return (minHeap.top()+maxHeap.top())/2.0;
        }
        else
            return maxHeap.top();
    }
};
