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
    int arr[101];

    for(int i = 1; i <= n; i++){
    	cin >> arr[i];
    }

    for(int i = 1; i <= n; i++){
    	for(int j = 1; j <= n; j++){
    		if(arr[j] == i)
    			cout << j << " ";
    	}
    }

    cout << endl;
 
    return 0;
}