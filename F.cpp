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

    int n, m;
    cin >> n >> m;

    int right = 1;
    int left = 0;
    for(int i = 0; i < n;i++){
    	if(i % 2 == 0){

    		for(int j = 0; j < m; j++)
    			cout << "#";

    	}else{

    		if(left){
    			left = 0;
    			right = 1;
    			cout << "#";
    			for(int i = 1; i < m; i++)
    				cout << ".";

    		}else{
    			right = 0;
    			left = 1;
    			for(int i = 1; i < m; i++)
    				cout << ".";
    			cout << "#";
    		}

    	}

    	cout << endl;
    }


 
    return 0;
}