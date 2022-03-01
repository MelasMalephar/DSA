class Solution {
public:
     int numberOfOne(int temp)  
    {
        int count=0;  // we have initialize our count with 0
        while(temp)
        {
            count+=temp&1; // Now if temp&1 will be only true if temp is true so it will return 1 iftemp=true                    
                          // so count+=1(if temp is true) else count+=0(if temp is not true or false)
            temp=temp>>1; // it will right shift our number ex-2(0010) on right shift it will be (0001)
                          //and 0001 is representation of 1 so we have decreased the value to 1
                          // this loop will terminate for temp=0;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> res;
        int temp;
        //Now it is simple just loop through 0 to n and find the number of set bits in each of them 
        for(int i=0;i<=n;i++)   
        {
            temp=numberOfOne(i);
            res.push_back(temp);  //just push the temp in your result
        }
        return res;
    }
};