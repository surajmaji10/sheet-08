/*
 * Author: akashmaji945 (@gmail.com) 
 */
#include<bits/stdc++.h>
using namespace std;

void init(){
	#ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
/***********************************************************************/



/**********************************************************************/
int main(){
    init();

    int n;
    cin >> n;

    int mn = INT_MAX;
    int mx = INT_MIN;
    int mni = -1;
    int mxi = -1;

    int start = 0;
    int end = n-1;

    int x;
    for(int i = 0; i < n; i++){
    	cin >> x;

    	if(x <= mn){
    		mn = x;
    		mni = i;
    	}
    	if(x > mx){
    		mx = x;
    		mxi = i;
    	}


    }

    if(mni > mxi){
    	cout << (mxi-start)+(end-mni) << endl;
    }else if(mni < mxi){
    	cout << (mxi-start)+(end-mni)-1 << endl;
    }else{
    	cout << 0 << endl;
    }
 
    return 0;
}