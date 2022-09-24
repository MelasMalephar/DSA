class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1= (ax2-ax1) * (ay2-ay1);
        int area2= (bx2-bx1) * (by2-by1);
        if(area1==0 || area2==0) return area1+area2;
        int l,b;
        if(by2>ay1 && by1<=ay1 && by2<ay2){ l=by2-ay1;}
        else if(by2>=ay2 && by1<=ay1){ l=ay2-ay1;}
        else if(by2<=ay2 && by1>=ay1){ l=by2-by1;}
        else if(by1<ay2  && by2>=ay2 && by1>ay1){ l=ay2-by1;}
        else { l=0;}
        if(bx2>ax1 && bx1<=ax1 && bx2<ax2){ b=bx2-ax1;}
        else if(bx2>=ax2 && bx1<=ax1){b=ax2-ax1; }
        else if(bx2<=ax2 && bx1>=ax1){ b=bx2-bx1;}
        else if(bx1<ax2  && bx2>=ax2 && bx1>ax1){ b=ax2-bx1;}
        else { b=0;}
        // cout<<area1<<" "<<area2<<" "<< l<<" "<<b<< endl;
        return area1+area2-(l*b);
    }
};