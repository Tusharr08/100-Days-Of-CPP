#include<bits/stdc++.h>
using namespace std;
//#include<ext/pb_ds/assoc_container.hpp>
//using namespace std;
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

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void printnode(struct node* ptr)
{
    if(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        printnode(ptr->left);
        printnode(ptr->right);
    }
}
int main()
{
    struct node*root= new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    struct node* ptr=root;
    printnode(ptr);

    return 0;
}
