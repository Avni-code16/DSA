// using stl library
#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(10);
    q.push(30);
    q.push(40);
    q.push (50);

    cout << "The front element is : "<< q.front() << endl;
    cout << "The back element is : " << q.back() << endl;
    cout << "Size is ...?" << q.size() << endl;

    q.pop();

    cout << "The  new front element is : "<< q.front() << endl;
    cout << "Size is now ...?" << q.size() << endl;
    cout << "Queue empty..?" << q.empty() << endl; // 0--false(not empty)
    return 0;
}
