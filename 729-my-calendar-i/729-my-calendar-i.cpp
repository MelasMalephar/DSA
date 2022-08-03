class MyCalendar {
public:
    vector<pair<int,int>> s;
    MyCalendar() {

    }
    
    bool book(int st, int ed) {
        if(s.size()==0){ s.push_back({st,ed}); return true;}
        for(auto &[k,l]:s){
            if((k==st) || (st<k && ed>k) || (k<st && st<l)||(k<st && ed<l ) || (st<k && ed>l))return false;
        }
        s.push_back({st,ed});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */