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

    char arr[101] = {0};
    cin >> arr;

    char start = 'a';
    int n = strlen(arr);
    int dist = 0;
    for(int i = 0; i < n; i++){

    	char ch = arr[i];
    	dist += min(abs(ch-start), min(abs(ch+26-start), abs(start+26-ch)));
    	start = ch;

    }

 	cout << dist << endl;
    return 0;
}