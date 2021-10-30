class Solution {
public:
    vector<int> constructRectangle(int &a) {
        int l=0;
        float k=sqrt(a),w;
        if(ceil(k) == floor(k)) {l=w=k;}
        else
        {
            w=floor(k);
            while(1)
            {   k=a/w;
                if(ceil(k) == floor(k)) {  cout<<ceil(k)<<" , "<<k<< " ,"<<floor(k)<<endl; 
                                         l=k; w=a/l; break;}
                else w--;
            }
            
        }
        vector<int> v;
        v.push_back(l);
        v.push_back(w);
        return v;
    }
};