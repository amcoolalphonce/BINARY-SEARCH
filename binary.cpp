#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>

using namespace std;
int binarySearch(int searchvalue, vector<int> arr
{
        sort(arr.begin(), arr.end());
        int first = 0;
        int last = (arr.size())- 1;
        int middle = 0;
        int position = -1;
        bool found = false;

        while(! found && first<=last)
        {
                middle = (first + last)/2;
                cout<<setw(3)<<first<<setw(3)<<middle<<setw(3)<<endl;

                if (searchvalue == arr[middle])
                {
                        position = middle;
                        found = true;
                }
                else if(arr[middle] > searchvalue)
                {
                        
                }
        }

})