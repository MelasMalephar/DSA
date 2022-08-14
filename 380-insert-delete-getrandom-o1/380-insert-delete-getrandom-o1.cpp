class RandomizedSet {
public:
    unordered_set<int> s;
    int a=0;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(s.count(val)==0){
            s.insert(val);
            a++;
            return true;
        }
        return false;

    }
    
    bool remove(int val) {
        if(s.count(val)==1){
            s.erase(val);
            a--;
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return *next(s.begin(),rand()%a);
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */