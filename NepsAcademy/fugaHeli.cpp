#include <bits/stdc++.h>
#define lp(init,var) for(int i=init;i<var;i++)
#define pri(a) printf("%d\n",a)
#define prld(a) printf("%ld\n",a)
#define si(a) scanf("%d",&a)
#define sii(a,b) scanf("%d %d",&a,&b)
#define sl(a) scanf("%lld",&a)
#define sll(a, b) scanf("%lld %lld",&a,&b)
 
#define mp make_pair
#define BUFF ios::sync_with_stdio(false);cin.tie(NULL)
#define pb push_back
#define f first
#define s second
#define INF 0x3f3f3f3f 
#define LINF 0x3f3f3f3f3f3f3f3fl
#define endl '\n'
//#define int long long 
  
const int MAX = 2e5;

using namespace std;

int main(){
  int helicopter,officer,fugitive,direction;
  string find = " ";

  vector<int> track(16,0);
  cin >> helicopter >> officer >> fugitive >> direction;
  track[helicopter] = 1;
  track[officer] = 2;
  track[fugitive] = 3;

  if(direction == 1){
    int i;
    for(i=fugitive;i<=15;i++){
      if(track[i] == 2){
        find = "policial";
        break;
      }
      if(track[i] == 1){
        find = "helicoptero";
        break;
      }
    }
    if(find==" "){
      for(i=0;i<=fugitive-1;i++){
        if(track[i] == 2){
          find = "policial";
          break;
        }
        if(track[i] == 1){
          find = "helicoptero";
          break;
        }        
      }
    }
  }else{
    int i;
    for(i=fugitive;i>=0;i--){
      if(track[i] == 2){
        find = "policial";
        break;
      }
      if(track[i] == 1){
        find = "helicoptero";
        break;
      }
    }
    if(find==" ") {
      for(i=15;i>=fugitive+1;i--){
        if(track[i] == 2){
          find = "policial";
          break;
        }
        if(track[i] == 1){
          find = "helicoptero";
          break;
        }        
      }
    }   
  }
  if(find=="policial"){
    cout << "N" << endl;
  }else{
    cout << "S" << endl;
  }
}