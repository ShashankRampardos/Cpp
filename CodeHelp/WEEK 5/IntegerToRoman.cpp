class Solution {
public:
    string intToRoman(int num) {
        vector<string> symbols={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};// kuch extra symbols bhi use kara ha edhar apni taraf say
        array<int,13> values={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        // map ki jaga 2 arrays ka use better ha idhar sayad
        string ans;
        for(int i=0;i<13;i++){

            while(num>=values[i]){
                ans.append(symbols[i]);
                num-=values[i];
            }
        }
        return ans;
    }
};
