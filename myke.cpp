#include<iostream>
using namespace std;
int main()
{
    int q,r,s,t;
    int n,k;                            //n is the length of an array and k is the thresold value 
    cout<<"enter length: ";
    cin>>n;
    cout<<"what is the threesold value ? ";
    cin>>k;
    int w,x,y,z;
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int start, end;
    start = end = -1;
    int currentsum, maxlen;
    maxlen = 0;
   
    for (int i = 0; i<n; i++)
    {
        currentsum =0;
        for (int j = i; j<n; j++)
        {
            currentsum +=arr[j];
            if (currentsum == k && (j - i + 1)> maxlen )
            {
                maxlen = j -i +1;
                start = i; 
                end = j;
                
            }
            
            
        }
    }
    if (start != -1 && end != -1)
    {
        for (int i = start; i<= end; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    else{
        cout<<"no such array found";
    }

    
    
    return 0;
}
