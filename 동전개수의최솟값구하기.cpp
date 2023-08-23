
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    int N,K;
    int answer=0;
    
    cin>>N>>K;
    vector<int> wons(N);
    
    for (int i=0; i<N; i++){
        cin>>wons[i];
    }

    for (int i=N-1; i>=0; i--){
        if (wons[i] <=K){
            answer+= (K/wons[i]);
            K= K%wons[i];      
        }
    }
    
    cout<<answer<<"\n";
}    