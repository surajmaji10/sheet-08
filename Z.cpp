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
    char arr[2001] = {0};
    cin >> arr;

    int mid = (n-1)/2;
    char ans[2001] = {0};


    ans[mid] = arr[0];

    if(n % 2 == 1){
    	for(int i = 1; i < n; i++){
    		if(i % 2 == 1){
    			mid = mid - i;
    		}else{
    			mid = mid + i;
    		}
    		ans[mid] = arr[i];
    	}
    }else{
    	for(int i = 1; i < n; i++){
    		if(i % 2 == 1){
    			mid = mid + i;
    		}else{
    			mid = mid - i;
    		}
    		ans[mid] = arr[i];
    	}
    }

    cout << ans << endl;
 
    return 0;
}