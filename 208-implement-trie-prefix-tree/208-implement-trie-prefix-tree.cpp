class Trie {
public:
    unordered_set<string> s;

    Trie() {
    }
    
    void insert(string word) {
        s.insert(word);
    }
    
    bool search(string word) {
        return s.find(word)!=s.end();
    }
    
    bool startsWith(string prefix) {
        for(string k:s){
            int j=0;
            for(int i=0;i<prefix.size();i++){
                if(prefix[i]==k[i])j++;
                else break;
            }
            if(j==prefix.size()) return true;
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */