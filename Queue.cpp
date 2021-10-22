// basic implementation of STL queue functions;
#include <iostream>  
#include <queue>  
using namespace std;  
void print(queue <int> q)  
{  
    queue <int> ss = q;  
    while (!ss.empty())  
    {  
        cout <<" "<< ss.front();  
        ss.pop();  
    }  
    cout << '\n';  
}  
  
int main()  
{  
    queue <int> Q;  
    Q.push(10);  
    Q.push(20);  
    Q.push(30);  
  
    cout << "The queue Q is : ";  
    print(Q);  
  
    cout << "\nQ.size() : " << Q.size();  
    cout << "\nQ.front() : " << Q.front();  
    cout << "\nQ.back() : " << Q.back();  
  
    cout << "\n queue after Q.pop() : ";  
    Q.pop();  
    print(Q);  
  
    return 0;  
}  
