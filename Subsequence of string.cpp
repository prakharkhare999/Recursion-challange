// Day(4)  subsequences of string
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void subsequences(string str,string output,int i){
    if(i>=str.length()){
    cout<<output<<endl;    
    return ;
    }
    
    //exclude
    subsequences(str,output,i+1);
    
    //include
  output.push_back(str[i]);
    
    subsequences(str,output,i+1);
    
}
int main() {
    
    string str="abc";
    string output="";
    int i=0;
    subsequences(str,output,i);
    
    

    return 0;
}
