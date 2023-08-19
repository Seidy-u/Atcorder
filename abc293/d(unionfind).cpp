#include<iostream>
#include<vector>
using namespace std;

class UnionFind{
    private:
        int N;
        vector<int> par;
        vector<int> rank;
        vector<int> size;
    
    public:
        //make union-find tree.
        UnionFind(int t){
            N = t;
            par.resize(N);
            rank.resize(N, 0);
            size.resize(N, 1);
            for(int i = 0; i < N; i++) par.at(i) = i;
        }

        //return the root of t.
        int root(int t){
            if(par.at(t) == t) return t;
            return par.at(t) = root(par.at(t));
        }

        //return whether s and t belong to same tree or not.
        bool same(int s, int t){
            return root(s) == root(t);
        }

        //unite s's tree and t's tree/
        void unite(int s, int t){
            s = root(s);
            t = root(t);
            if(s == t) return;
            if(rank.at(s) < rank.at(t)){
                par.at(s) = t;
                size.at(t) += size.at(s);
            }
            else{
                par.at(t) = s;
                size.at(s) += size.at(t);
            }
            if(rank.at(s) == rank.at(t)) rank.at(s)++;
            return;
        }

        //return whether t is root or not.
        bool is_root(int t){
            return t == par.at(t);
        }

        //if t is parent, return the size of the tree, else return 0.
        int size_of(int t){
            return is_root(t)? size.at(t): 0;
            //return size.at(root(t));
        }


};


int main(){
    int N, M;
    cin >> N >> M;
    UnionFind uf(N);
    int a, b;
    char ch;
    int X = 0, Y = 0;
    for(int i = 0; i < M; i++){
        cin >> a >> ch >> b >> ch;
        a--;
        b--;
        if(uf.same(a, b)) X++;
        else uf.unite(a, b);
    }
    for(int i = 0; i < N; i++) if(uf.is_root(i)) Y++;
    Y -= X;
    cout << X << ' ' << Y << endl;
}