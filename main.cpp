#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k,len;
    int m=0;
    bool flag;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>len>>k;
        cin>>word;
        flag=false;
        for(j=0;j<=len-k;j++)
        {
            str=word.substr(j,k);
            ones=0;
            zeroes=0;
            q=0
            for(m=0;m<str.length();m++)
            {
                if(str[m]=='1')
                    ones++;
                else if(str[m]=='0')
                    zeroes++;
                else if(str[m]=='?')
                    q++
            }
            if(ones==zeroes)
            {
                flag=true;
            }
            else if (abs(ones-zeroes)==q)
            {
                flag=true;
            }
            else
            {
                flag=false;
                break;
            }

        }
        if(flag==false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }


return 0;
}
