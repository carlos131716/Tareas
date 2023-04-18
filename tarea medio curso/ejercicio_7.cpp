#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    stack<int> pila;
    queue<int> cola;
    int x=0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "introduzca el valor de la pila " << i << endl;
        cin >> x; 
       
        pila.push(x);
    
    }
    int temp;
    cout<<"el contenido de la pila es "<<endl; 
    for (int i=1;i<=10;i++)
    {
        temp=pila.top();
        cout<< pila.top() <<endl;

        pila.pop();
        cola.push(temp);
    }
    cout<<endl;
    cout<<"el contenido de la cola es ";
        while(!cola.empty()){

            cout<<cola.front()<<" ";
            cola.pop();
        }
    return 0;
}