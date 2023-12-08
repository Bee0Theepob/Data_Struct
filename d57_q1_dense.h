#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
#include<set>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        // Your code here
        n=3;
    }

    DenseGraph(int n_in) {
        // Your code here
        n=n_in;
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        n=G.n;
        e=G.e;
    }

    void AddEdge(int a, int b) {
        // Your code here
        e.insert(make_pair(a,b));
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        e.erase({a,b});
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return e.find({a,b})!=e.end();
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph result(this->n);
        for(auto x:e){
            result.AddEdge(x.second,x.first);
        }
        return result;
    }

protected:
    int n;
    // Your code here
    set<pair<int,int>> e;
};
#endif // __DENSE_GRAPH_H__
