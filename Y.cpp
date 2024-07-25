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

    int arr[n+1] = {0};
    int ones = 0, twos = 0, threes = 0;

    for(int i = 1; i <= n; i++){
    	cin >> arr[i];

    	if(arr[i] == 1) ones++;
    	if(arr[i] == 2) twos++;
    	if(arr[i] == 3) threes++;

    }

    cout << min(ones, min(twos, threes)) << endl;

    int i = 0, j = 0, k = 0;

    while(i <= n and j <= n and k <= n){
    	while(i <= n and arr[i] != 1) i++;
    	while(j <= n and arr[j] != 2) j++;
    	while(k <= n and arr[k] != 3) k++;

    	if(i <= n and j <= n and k <= n){
    		cout << i << " " << j << " " << k << endl;
    		i++;
    		j++;
    		k++;
    	}else{
    		break;
    	}

    }


 
    return 0;
}
