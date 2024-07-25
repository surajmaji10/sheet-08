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

    int x, y;
    cin >> x >> y;
    if(x != y){
    		cout << "rated\n";
    		return 0;
    }

    int px = x, py = y;

    int unrated = 0;
    for(int i = 1; i < n; i++){
    	cin >> x >> y;
    	if(x != y){
    		cout << "rated\n";
    		return 0;
    	}else{
    		if(x <= px and y <= py){
    			// continue;
    		}else{
    			unrated = 1;
    			
    		}
    		px = x;
    		py = y;
    	}

    }
    if(unrated){
    	cout << "unrated\n";
    }else{
    	cout << "maybe\n";
    }
   
    return 0;
}