#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include <set>
#include <vector>
#include <iostream>

using namespace std;

class SparseGraph{
public:
    SparseGraph() {
        v = vector<set<int>>(3);
        n=3;
    }

    SparseGraph(int n_in){
        // Your code here
        v = vector<set<int>>(n_in);
        n=n_in;
    }

    SparseGraph(const SparseGraph& G){
        // Your code here
        n=G.n;
        v =  G.v;
    }

    void AddEdge(int a, int b) {
		v[a].insert(b);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
		v[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
		return v[a].find(b)!=v[a].end();
    }

    SparseGraph Transpose() const {
        // Your code here
		SparseGraph result(n);
		for (int i = 0; i < v.size(); i++) {
			for (const auto& x : v[i]) {
				result.AddEdge(x, i);
			}
		}
		return result;
    }

protected:
    // Your code here
	int n;
	vector<set<int>> v; 
};
#endif // __SPARSE_GRAPH_H__


