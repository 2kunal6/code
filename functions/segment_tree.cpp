suppose n is the size of the array.


vector<int> v,vmin,vmax;
int n;

int rangemax(int l,int r)
{
    int sqrtn=(int)sqrt(n);
    if((sqrtn*sqrtn)!=n)sqrtn++;
    int maxi=-1;
    if((r-l)<=sqrtn)
    {
                    for(int i=l;i<=r;i++)if(v[i]>maxi)maxi=v[i];
                    return maxi;
    }
    int leftran=l/sqrtn,rightran=r/sqrtn;
    for(int i=leftran+1;i<rightran;i++)if(vmax[i]>maxi)maxi=vmax[i];
    for(int i=l;i<(leftran+1)*sqrtn;i++)if(v[i]>maxi)maxi=v[i];
    for(int i=r;i>=(rightran*sqrtn);i--)if(v[i]>maxi)maxi=v[i];
    return maxi;
}
int rangemin(int l,int r)
{
    int sqrtn=(int)sqrt(n);
    if((sqrtn*sqrtn)!=n)sqrtn++;
    int mini=1000000000;
    if((r-l)<=sqrtn)
    {
                    for(int i=l;i<=r;i++)if(v[i]<mini)mini=v[i];
                    return mini;
    }
    int leftran=l/sqrtn,rightran=r/sqrtn;
    for(int i=leftran+1;i<rightran;i++)if(vmin[i]<mini)mini=vmin[i];
    for(int i=l;i<(leftran+1)*sqrtn;i++)if(v[i]<mini)mini=v[i];
    for(int i=r;i>=(rightran*sqrtn);i--)if(v[i]<mini)mini=v[i];
    return mini;
}
int main()
{
    int t;
    scanf("%d",&n);
    int sqrtn=(int)sqrt(n);
    if((sqrtn*sqrtn)!=n)sqrtn++;
    
    scanf("%d",&t);
    v.push_back(t);
    
    int maxi=-1,mini=1000000000;
    if(t>maxi)maxi=t;
    if(t<mini)mini=t;
    
    for(int i=1;i<n;i++)
    {
            scanf("%d",&t);
            if(t>maxi)maxi=t;
            if(t<mini)mini=t;
            v.push_back(t);
            if((i%sqrtn)==(sqrtn-1) || i==(n-1))
            {
                          vmin.push_back(mini);
                          vmax.push_back(maxi);
                          maxi=-1;
                          mini=1000000000;
            }
    }
    int querymax=rangemax(l,r);
    int querymin=rangemin(l,r);
}