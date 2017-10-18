#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int row;
    int column;
    vector< vector<string> > star;
    
    cout<<"Enter Rows and Columns of stars"<<endl;
    cout<<"Rows: ";
    cin>> row;
    cout<<endl<<"Columns: ";
    cin>> column;

    if (row > 0 && column > 0){
    star.resize(row);
        for (int r = 0; r<star.size(); r++){
            star[r].resize(column);
        }

        for (int r = 0; r<star.size(); r++){
            for (int c = 0; c<star[r].size(); c++){
                star[r][c] = "*";
                cout<<star[r][c];
            }   
        cout<<endl;
        }
    }

    return 0;
}
