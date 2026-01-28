class MyCalendarTwo {
public:
    map<int,int>events;
    MyCalendarTwo() {
        
    }
    
    bool book(int startTime, int endTime) {
        events[startTime]++;
        events[endTime]--;

        int count = 0;
        for(auto & it: events){
            count+=it.second;
            if(count>2){ // more than 2 
                events[startTime]--;
                events[endTime]++;
                return false;
            }
        }
        return true;
    }
};
// tc -->O(n*(logn+n))
// sc --> O(n)


/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */
