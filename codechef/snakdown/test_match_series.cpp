#include<bits/stdc++.h>
using namespace std;
string who_wins(){
    int ind_wins = 0, eng_wins = 0;
    vector<int>wins;
    
    for(int i=0; i<5; i++){
        int temp; cin>>temp;
        wins.push_back(temp);
    }

    for(int i=0; i<5; i++){
        if(wins[i]==1){
            ind_wins++;
        }else if(wins[i]==2){
            eng_wins++;
        }
    }

    if(ind_wins>eng_wins){
        return "INDIA";
    }else if(ind_wins<eng_wins){
        return "ENGLAND";
    }
    return "DRAW";
}
int main(){
    int t; cin>>t;

    while(t--){
        cout<<who_wins()<<"\n";
    }
    return 0;
}