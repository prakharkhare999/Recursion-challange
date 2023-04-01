// Day(3) ---- Findkeys in string
#include <iostream>

using namespace std;
bool findchar(string str,int n,int i, char key)
{
    if(i>=n){
        return false;
    }
    if(str[i]==key){
        return true;
        
    }
    
    
    //return ke bina bhi ho jayega 🔽
    
    return findchar(str,n,i+1,key);
   
}
int main(){
    string str="prakharkhare";
  int n=str.length();
  int i=0;
 char key='z';
  bool ans=findchar(str,n,i,key);
  cout<<ans;

}
