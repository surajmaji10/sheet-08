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

    int police = 0, crimes = 0, untreated = 0;

    int event;
    for(int i = 0; i < n; i++){

    	cin >> event;

    	if(event > 0){
    		police += event;
    		continue;
    	}

    	if(event < 0){
    		crimes += (-event);
    	}

    	if(crimes > police){
    		untreated += (crimes-police);
    		crimes = 0;
    	}else{
    		police = police-crimes;
    		crimes = 0;
    	}

    	//cout << untreated << endl;

    }

 	cout << untreated << endl;
 	
    return 0;
}