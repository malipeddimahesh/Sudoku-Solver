#include<bits/stdc++.h>
using namespace std;
void print_board(int board[][9])
{
    cout << "-------------------------\n";

    for(int i = 0; i < 9; i++)
    {
        cout << "| ";

        for(int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";

            if((j + 1) % 3 == 0)
                cout << "| ";
        }

        cout << "\n";

        if((i + 1) % 3 == 0)
            cout << "-------------------------\n";
    }
}
bool safe_num(int board[][9],int num,int row,int col)
{
    int i,j;
    for(i=0;i<9;i++)
    {
        if(board[row][i]==num||board[i][col]==num)
        return false;
    }
    i=0;
    int srow=(row/3)*3;
    int scol=(col/3)*3;
    for(i=srow;i<srow+3;i++)
    {
        for(j=scol;j<scol+3;j++)
        {
            if(board[i][j]==num)
            return false;
        }
    }
    return true;
}
bool validate(int board[][9])
{
    int row,col;
    for(row=0;row<9;row++)
    {
        for(col=0;col<9;col++)
        {
            if(board[row][col]!=0)
            {
                if(board[row][col]>9 || board[row][col]<0)
                return false;
                int num=board[row][col];
                board[row][col]=0;
                if(!safe_num(board,num,row,col))
                {
                    board[row][col]=num;
                    return false;
                }
                board[row][col] = num;
            }
        }
    }
    return true;
}
bool empty_spaces(int board[][9],int &row,int &col)
{
    for(row=0;row<9;row++)
    {
        for(col=0;col<9;col++)
        {
            if(board[row][col]==0)
            return true;
        }
    }
    return false;
}
bool solver(int board[][9])
{
    int row,col;
    if(empty_spaces(board,row,col))
    {
        for(int num=1;num<=9;num++)
        {
            if(safe_num(board,num,row,col))
            {
                board[row][col]=num;
                if(solver(board))
                return true;
                else
                board[row][col]=0;
            }
        }
        return false;
    }
    return true;
}
int main()
{
    int board[9][9];
    int row,col;
    cout<<"Please enter the initial sudoku:\n";
    for(int row=0;row<9;row++)
    {
        for(col=0;col<9;col++)
        {
            cin>>board[row][col];
        }
    }
    cout << "Initial Sudoku\n";
    print_board(board);
    if(!validate(board))
    {
        cout<<"Invalid Sudoku Input";
        return 0;
    }
    if (solver(board))
    {
        cout<<"Solved Sudoku\n";
        print_board(board);
    }
    else 
    cout<<"This sudoku cannot be solved\n";
    return 0;
}
