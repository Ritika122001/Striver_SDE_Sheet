bool isSafe(int u, vector<vector<int>> mat, int c, int M, int m, vector<int>& color){

    color[u] = c;

    for(int i=0; i<M; i++){

        if(mat[u][i] == 1){

            if(color[i] == c){

                color[u] = -1;

                return false;

            }

        }

    }

    return true;

}

 

bool mColoring(vector<vector<int>> &mat, int u, vector<int>&color, int M, int m){

    if(u == M){

        return true;

    }

    for(int i=0; i<m; i++){

        if(isSafe(u, mat, i, M, m, color)){

            bool flag = mColoring(mat, u+1, color, M, m);

            if(flag){

                return true;

            }

        }

    }

    color[u] = -1;

    return false;

}

 

string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
        int M = mat[0].size();

    vector<int> color(M, -1);

    for(int j=0; j<M; j++){

        if(color[j] == -1){

            if(!(mColoring(mat, j, color, M, m))){

                return "NO";

            }

        }

    }

    return "YES";


}