class ATM {
vector<long long> notes;
    
    inline int getdenom(int i) {
        if(i==0)
            return 20;
        else if(i==1)
            return 50;
        else if(i==2)
            return 100;
        else if(i==3)
            return 200;
        else
            return 500;
    }
public:
    ATM() {
        notes = vector<long long>(5, 0);
    }
    
    void deposit(vector<int> banknotesCount) {
        for(int i=0; i<5; i++)
            notes[i] += banknotesCount[i];
    }
    
    vector<int> withdraw(int amount) {
        vector<int> ans(5, 0);
        int i=4, bal = amount;
        while (bal>0 && i>=0) {
            int numNote = min((long long)bal/getdenom(i), notes[i]);
            bal -= getdenom(i)*numNote;
            ans[i] = numNote;
            i--;
        }
        if(bal==0) {
            for (int i = 0; i < 5; i++)
                notes[i] -= ans[i];
            return ans;
        }
        else
            return vector<int>(1, -1);
    }
};
/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */