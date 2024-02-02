#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the size of array: ";
    cin>>N;
    int A[N];
    cout<<"Enter the array elements"<<endl;
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    int S=0;
    int E=N-1;
    while(S<E)
    {
        swap(A[S],A[E]);
        S++;
        E--;
    }
    cout<<"The reverse of array is:"<<endl;
    for(int i=0;i<N;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}