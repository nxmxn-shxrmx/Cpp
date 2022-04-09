#include<iostream>

using namespace std;

int main(void)
{
	
    int num ,total ,start ,end ,count;
    cin >> num;
    total = 2 * num + 1;
    end   = num + 1;
    start = num;
    
    for(int i = 0 ; i < total ; i++)
    {
            count = 0;
            for(int j = 0 ; j < end ; j++)
            {
                    if(j >= start)
                    {
                         if(j != start)cout << " "; 
                         
                         cout << count;          
                         count = j < num ? count+1 : count-1;
                    }
                    else
                    {
                        cout << "  ";               
                    }
            }
            cout << endl;
            
            if(i < num)
            {
                 start--;
                 end++;
            }
            else
            {
                start++;
                end--;
            }
    }
    cout << endl;
    
    //system("pause");
    return 0;
}