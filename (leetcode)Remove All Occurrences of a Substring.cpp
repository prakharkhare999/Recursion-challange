// Day(10) Remove All Occurrences of a Substring
// Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

// Find the leftmost occurrence of the substring part and remove it from s.
// Return s after removing all occurrences of part.

// A substring is a contiguous sequence of characters in a string.
class Solution {
public:


void removeocc(string &s,string &part){
int found=s.find(part);
if(found!=string::npos){
    string leftpart=s.substr(0,found);
    string rightpart=s.substr(found+part.size(),s.size());
    s=leftpart+rightpart;
     removeocc(s,part);
}
    else{
       
        return;
    }




}


    string removeOccurrences(string s, string part) {
    removeocc(s,part);
    return s;    
    }
};
 
