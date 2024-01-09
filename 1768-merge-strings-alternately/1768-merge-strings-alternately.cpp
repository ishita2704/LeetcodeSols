class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string finalStr="";
        int i =0;
        int j=0;
        while(i<word1.length() and j<word2.length()){
            finalStr.push_back(word1[i]);
            i++;
            finalStr.push_back(word2[j]);
            j++;
        }
         while(i<word1.length()){
             finalStr.push_back(word1[i]);
             i++;
         }
         while(j<word2.length()){
             finalStr.push_back(word2[j]);
             j++;
         }
         return finalStr;
    }
};