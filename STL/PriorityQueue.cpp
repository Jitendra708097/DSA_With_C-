    // which is use for priority element it print first the largest in elemet priority queue

    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        priority_queue<int,greater<int>> pq;
        pq.push(5);
        pq.push(3);
        pq.push(56);
        pq.push(55);
        pq.push(95);
        pq.push(05);
        pq.push(15);
        pq.push(52);
        pq.push(55);

        while(!pq.empty())
        {
            cout<<pq.top()<<" ";
            pq.pop();
        }
    }
