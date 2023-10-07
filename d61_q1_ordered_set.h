#include <vector>
#include <set>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v=A;
    set<T> s;
    for(int i=0;i<A.size();i++){
        s.insert(A[i]);
    }

    for(int i=0;i<B.size();i++){
        if(s.find(B[i])==s.end()){
            v.push_back(B[i]);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> s;
    for(int i=0;i<B.size();i++){
        s.insert(B[i]);
    }
    for(int i=0;i<A.size();i++){
        if(s.find(A[i])!=s.end()){
            v.push_back(A[i]);
        }
    }
    return v;
}
