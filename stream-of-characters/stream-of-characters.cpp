class StreamChecker {
public:
   struct trie
    {
        bool eof;
        struct trie *children[26];
    };
    trie* createNode()
    {
        trie* ret=(trie*)malloc(sizeof(trie));
        ret->eof=false;
        for(int i=0;i<26;++i)
            ret->children[i]=NULL;
        return ret;
    }
    void insert(trie* root,string key)
    {
        trie* temp=root;
        for(char x:key)
        {
            if(temp->children[x-'a']==NULL)
                temp->children[x-'a']=createNode();
            temp=temp->children[x-'a'];
        }
        temp->eof=true;
    }
    trie* root;
    string temp;
    StreamChecker(vector<string>& words) 
    {
        root=createNode();
        for(string x:words)
        {
            reverse(x.begin(),x.end());
            insert(root,x);
        }
    }
    
    bool query(char letter) 
    {
        temp.push_back(letter);
        trie* t=root;
        for(int i=temp.size()-1;i>=0;--i)
        {
            t=t->children[temp[i]-'a'];
            if(t==NULL)
                return false;
            else if(t->eof)
                return true;
        }
        return false;
    }
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */