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

    int r, c;
    scanf("%d %d", &r, &c);
    //cout << r << ":" << c << endl;

    char arr[r][c];
    char ch;
    int rows[r] = {0}, cols[c] = {0};

    scanf("%c",&ch);
    for(int i = 0; i < r; i++){
    	for(int j = 0; j < c; j++){
    		scanf("%c",&ch);
    		arr[i][j] = ch;
    		if(arr[i][j] == 'S'){
    			rows[i] = 1;
    			cols[j] = 1;
    		}
    	}
    	scanf("%c",&ch);
    }

    // for(int i = 0; i < r; i++){
    // 	for(int j = 0; j < c; j++){
    // 		cout << arr[i][j];
    // 	}
    // 	cout << endl;
    // }

    int rc = 0, cc = 0;
    for(int i = 0; i < r; i++){
    	//cout << rows[i] << " ";
    	if(rows[i] == 0) rc++;
    }
    //cout << endl;
    for(int j = 0; j < c; j++){
    	//cout << cols[j] << " ";
    	if(cols[j] == 0) cc++;
    }
    //cout << endl;
    //cout << rc << ":" << cc << endl;
    int ans = rc * c + cc * r - rc * cc;
    cout << ans << endl;



 
    return 0;
}