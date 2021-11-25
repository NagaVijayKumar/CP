#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(){
	int i,p,q,n;
    vector<int>arr(1000,0);
	cin>>n;
	for(i=0;i<n;i++){
		cin>>p>>q;
		
		if(p==q){
			arr[i]=0;
		}
		else if(p>q){
			arr[i]=p-q;
		}
		else{
			if((q-p)%2==0){
				arr[i]=(q-p)/2;
			}else{
				arr[i]=((q-p)/2)+2;
			}
		}

	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
	
}