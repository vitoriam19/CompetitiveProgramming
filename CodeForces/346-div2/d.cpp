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
  int n;
  int first,second;
  string previusDirection = " ";
  int qtd=0;
  cin >> n;
  cin >> first >> second;
  lp(0,n){
    int x,y;
    cin >> x >> y;
    
    if(x > first){
      if(previusDirection == "sul"){
        qtd ++;
      }
      previusDirection = "direita";
    }
    if(x < first){
      if(previusDirection == "norte"){
        qtd ++;
      }
      previusDirection = "esquerda";
    }
    if(y > second){
      if(previusDirection == "direita"){
        qtd ++;
      }
      previusDirection = "norte";
      
    }
    if(y < second){
      if(previusDirection == "esquerda"){
        qtd ++;
      }
      previusDirection = "sul";
    }
    first = x;
    second = y;
  }
  cout << qtd << endl;
}