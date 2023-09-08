#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;

int N, x;
string st;
queue<int> q;

int main(){
  cin.tie(NULL);
  cin.sync_with_stdio(false);

  cin>>N;

  for (int i=0; i<N; i++){
    cin>>st;

    if (st=="push"){
      cin>>x;
      q.push(x);
    }
    else if (st=="pop"){
      if (!q.empty()){	
          cout<<q.front()<<'\n';
          q.pop();
      }
      else cout<<-1<<'\n';
    }
    
    else if (st=="size"){
        cout<<q.size()<<'\n';
    }
    else if (st=="empty"){
        cout<<q.empty()<<'\n';
    }
    
    else if (st=="front"){
        if (!q.empty()) cout<<q.front()<<'\n';
        else cout<<-1<<'\n';
        
    }  
    
    else 
    {
        if (!q.empty()) cout<<q.back()<<'\n';
        else cout<<-1<<'\n';
    }
		
  }
}



