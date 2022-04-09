#include<bits/stdc++.h>

using namespace std;
long long bin(int n)
    {  long long x=0;long long i=1,mod;
    while(n>0)
        {  if((n%2)==1) 
               mod=7; 
              else mod=4;
        x+= (mod)*(i); 
        i=i*10;
        n=n/2;
    }
     return x;
}

int main() {
    int t,i,j,max,n;
    cin>>t;
    vector <int> v;
    vector <long long int> b;
    max=0;
    for(i=0;i<t;i++)
        {
        cin>>n;
        
        v.push_back(n);
    }  
    for(i=0;i<=5000;i++){  
         b.push_back(bin(i));}    
           
    for(i=0;i<t;i++)
        {   
           for(j=1;j<=5000;j++)
               {     
                if(((b[j])%v[i])==0)
                     { cout<<b[j]<<endl; 
                     break;
                     }
           }
        
        
    }
    return 0;
}