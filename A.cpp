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

int check(char* arr, int l, int r){
    if(l > r){
        return 1;
    }
    if(arr[l] == arr[r] and arr[l] != '?'){
        return check(arr, l+1, r-1);
    }else if(arr[l] == '?' and arr[r] == '?'){
        arr[l] = arr[r] = 'a';
        return check(arr, l+1, r-1);
    }
    else if(arr[l] == '?' and arr[r] != '?'){
        arr[l] = arr[r];
        return check(arr, l+1, r-1);
    }else if(arr[r] == '?' and arr[l] != '?'){
        arr[r] = arr[l];
        return check(arr, l+1, r-1);
    }else{
        return -1;
    }
}


/**********************************************************************/
int main(){
    init();
    
    char str[100];
    cin >> str;

    int ans = check(str, 0, strlen(str)-1);
    if (ans == -1){
        cout << -1 << endl;
    }else{
        cout << str << endl;
    }


 
    return 0;
}