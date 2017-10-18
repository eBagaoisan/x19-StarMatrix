#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int row;
    int column;
    vector< vector<string> > star;
    
    cout<<"Enter Rows and Columns of stars: ";
    cin>> row;
    cin>> column;

    star.resize(row);
    for (int r = 0; r<star.size(); r++){
        star[r].resize(column);
    }

    for (int r = 0; r<star.size(); r++){
        for (int c = 0; c<star[r].size(); c++){
            star[r][c] = "*";
        }
    }

    return 0;
}
