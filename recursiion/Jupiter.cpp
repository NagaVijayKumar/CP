
/*Team - 3
voter 5
Input: votes = ["ABC","ACB","ABC","ACB","ACB"]
Output: "ACB"
    teamsize-1         teamsize-2        2   teamnn-n
// 1st place   2 place   3rd place       total
A   5 = 50          0 =0       0   =0      50  
B   0  =0           2  = 10      3 = 6     16
C   0  = 0           3  = 15      2 = 4    19



F                                          19
G    1                                   1
H                 1                       1
 
ACB
your call disconnected
ok, i'll rejoin meet, give me a minute
*/
#include<bits/stdc++.h>
using namespace std;

void findWinner(vector<string>votes){
  
  unordered_map<string,int>m;
  
  //Insert votes to map
  
  for(int i=0; i<votes.size(); i++){
    for(int j=0; j<votes[i].size(); j++){
      m[votes[i][j]] = votes.size()-j;
    }
  }
  
  int maxValMap = 0;
  string winner = "";
  
  for(auto it : m){
    string key = it.first;
    int val = it.second;
    
    if(val>maxValMap){
      maxValMap = val;
      winner = key;
    }
    //If it tie, smaller element
    else if(val==maxValMap && winner>key){
      winner = key;
    }
    
    cout<<winner;
  }
  
  cout<<winner;
  
}

int main(){
  
  int teams = 3;
  vector<string>votes {"ABC","ACB","ABC","ACB","ACB"};
  
  findWinner(votes);
}
/*
start imoplement

Plese wrap up - > I will give my feedback to HR..
Goinf fowrard have good internet sppedd

i'm done with code
Thank you for your support
ThankYou so much
*/