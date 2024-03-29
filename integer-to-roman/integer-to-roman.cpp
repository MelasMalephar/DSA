class Solution {
public:
    string intToRoman(int num) {
        string s;
        while(num/1000>0){ num-=1000; s.push_back('M');}
        while(num/500>0){ 
            if(num>=900){
                num-=900;
                s.push_back('C');
                s.push_back('M');
            }
            else { num-=500; s.push_back('D');}
        }
        while(num/100>0){
            if(num>=400){
                num-=400;
                s.push_back('C');
                s.push_back('D');
            }
            else{ num-=100; s.push_back('C');}
        }
        while(num/50>0){ 
            if(num>=90){
                num-=90;
                s.push_back('X');
                s.push_back('C');
            }
            else { num-=50; s.push_back('L');}
        }
        while(num/10>0){
            if(num>=40){
                num-=40;
                s.push_back('X');
                s.push_back('L');
            }
            else{ num-=10; s.push_back('X');}
        }
        while(num/5>0){ 
            if(num>=9){
                num-=9;
                s.push_back('I');
                s.push_back('X');
            }
            else { num-=5; s.push_back('V');}
        }
        while(num/1>0){
            if(num>=4){
                num-=4;
                s.push_back('I');
                s.push_back('V');
            }
            else{ num-=1; s.push_back('I');}
        }
    return s;
    }
};