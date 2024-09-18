#include <stdio.h>

#define N 10

enum Slot
{
    bosluk,
    teklikGemi,
    ciftlikGemi,
    uclukGemi,
    dortlukGemi,
    bomba
};

void boardResetleyici(enum Slot board[N][N])
{

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            board[i][j] = bosluk;
        }
    }
}

void printBoard(enum Slot board[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\n", board[i][j]);
        }
    }
}




int main()
{
    enum Slot board[N][N];
    boardResetleyici(board);

    printBoard(board);
}
