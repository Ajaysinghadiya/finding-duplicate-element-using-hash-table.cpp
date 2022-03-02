//this program will show the duplicate numbers in the array and counting the number of accurances 
#include<iostream>
using namespace std;

int  main ()
{
    int numebr_of_elements;
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>> numebr_of_elements;
    int array[numebr_of_elements];
    cout<<"Enter the elemetns in sorted order one by one :"<< endl;
    for(int i=0;i<numebr_of_elements;i++)
    {
        cin>>array[i];
    }

    int max=array[numebr_of_elements-1];
    int lowest = array[0];

    int hash_table[max+1]={0};
    for(int i=0;i<numebr_of_elements;i++)
    {
        hash_table[array[i]]++;
    }
    for(int i=lowest;i<=max;i++)
    {
        if(hash_table[i]>1)
        {
            cout<< i <<" is repeating "<<hash_table[i]<<" times"<<endl;
        }
    }
    return 0;
}
