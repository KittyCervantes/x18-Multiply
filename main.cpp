//Author:Bianca Cervantes

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int MAX=13;

int main()
{
        
        vector< vector<int> >multp;
        multp.resize(MAX);

        for(int row=1;row<multp.size();row++)
        {
        multp[row].resize(MAX);
        }
                for(int row=1;row<MAX; row++)
                {
                    for(int column=1;column<multp.size();column++)
                    {
                    multp[row][column]= row*column;
                    cout<<" "<< multp[row][column]<<" ";
                    }
                    cout<<endl;

                }



        return 0;
}

