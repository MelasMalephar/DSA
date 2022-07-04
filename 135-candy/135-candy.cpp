class Solution {
public:
    int candy(vector<int>& v) {
        int n=v.size();
        if(n==1) return 1;
        if(n==2) return 2+(v[0]!=v[1]);
        int arr[n],ar[n];
        
        arr[0] = v[0]<=v[1];
        
        for(int i=1;i<n;i++){
            if((i<n-1 && v[i]<=v[i+1]) && (i>0 && v[i]<=v[i-1])){ arr[i]=1;}
            else if(i>0 && v[i]>v[i-1])arr[i]=1+arr[i-1];
            else arr[i]=0;
        }
        arr[0]=v[0]<=v[1]?1:1+arr[1];
        
        ar[n-1] = v[n-1]<=v[n-2];

        for(int i=n-2;i>=0;i--){
            if(i>0 && v[i]<=v[i-1] && i<n-1 && v[i]<=v[i+1]){ ar[i]=1;}
            else if(i<n-1 && v[i]>v[i+1]) ar[i]=1+ar[i+1];
            else ar[i]=0;
        }
        ar[n-1] = v[n-1]<=v[n-2]?1:1+ar[n-2];
        
        int ans=0;
        for(int i=0;i<n;i++){ ans+=max(ar[i],arr[i]);}

       
        return ans;
    }
};