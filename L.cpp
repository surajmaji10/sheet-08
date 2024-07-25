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

    int arr[1001];
    for(int i = 0; i < n; i++){
    	cin >> arr[i];
    }

    int ser =0, dim = 0;

    int i = 0, j = n-1;
    int turn = 1;
    while(i <= j){
    	//cout << i << ":" << j << endl;
    	if(turn){
    		if(arr[i] > arr[j]){
    			ser += arr[i];
    			i += 1;
    		}
    		else{
    			ser += arr[j];
    			j -= 1;
    		}
    	}else{
    		if(arr[i] > arr[j]){
    			dim += arr[i];
    			i += 1;
    		}
    		else{
    			dim += arr[j];
    			j -= 1;
    		}

    	}
    	turn = 1 - turn;
    }

    cout << ser << " " << dim << endl;
 
    return 0;
}