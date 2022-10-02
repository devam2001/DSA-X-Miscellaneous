class Solution {
public:
    string intToRoman(int num) {
        vector<int> index = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string s = "";
        string roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        for(int i=0; i<index.size(); i++){
                while(num >= index[i])  {
                s += roman[i];
                num -= index[i];
                }
        }
            
        return s;
    }
};