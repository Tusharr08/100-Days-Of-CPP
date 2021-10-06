#include<bits/stdc++.h>
using namespace std;
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;

#define ff first
#define ss second
#define tc ll t sc cin >>t sc while(t--)
#define sc ;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define int long long
#define mt make_tuple
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define pqb priority_queue<int>
#define pqs priority_queue<int,vi,greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x,y) fixed<<setprecision(y)<<x
#define mk(arr,n,type) type *arr=new type[n];
#define range(a,b) substr(a,b-a+1)
#define trace(x) cerr<<#x<<": "<<<<x<<" "<<endl
#define radhe ios::sync_with_stdio(false);
#define krishna cin.tie(NULL);

//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

vector<vi> adj;
int n;
vi level, subtree_size;


void dfs(int cur=1,int par=-1)
{
    level[cur]=level[par]+1;
    cout<<cur<<"\n";
    for(int neighb: adj[cur])
    {
        if(neighb==par)
        continue;

        subtree_size[cur]+= subtree_size[neighb];
        dfs(neighb,cur);
    }
}

int32_t main()
{
    radhe krishna
    cout<<"enter no. of nodes:"<<endl;
    cin>>n;
    adj.resize(n+1);
    cout<<"Enter the "<<n-1<<" edges:"<<endl;
    for(int i=0;i<n-1;++i)
    {
        int u,v;
        cout<<"Enter u & v:"<<i<<endl;
        cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    cout<<"Fuck"<<endl;
    level[0]=-1;
    cout<<"level[0]"<<level[0]<<endl;
    dfs();
    cout<<"Level of nodes"<<endl;
    for(int i=1;i<=n;i++)
    cout<<i<<"->"<<level[i]<<endl;
    cout<<"Subtree size"<<endl;
    for(int i=1;i<=n;i++)
    cout<<i<<"->"<<subtree_size[i]<<endl;

    return 0;
}


