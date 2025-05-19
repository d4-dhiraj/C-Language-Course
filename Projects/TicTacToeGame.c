#include <stdio.h>

char board[3][3];
char current_mark;
int row, col;

// Function to initialize the game board
void initializeBoard()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = '1' + (i * 3 + j); // fills with '1' to '9'
}

// Function to display the current board
void displayBoard()
{
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i != 2)
            printf("---|---|---\n");
    }
    printf("\n");
}

// Function to check for a win
int checkWin()
{
    // Rows, Columns, Diagonals
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
            return 1;

    for (int i = 0; i < 3; i++)
        if (board[0][i] == board[1][i] &&
            board[1][i] == board[2][i])
            return 1;

    if (board[0][0] == board[1][1] &&
        board[1][1] == board[2][2])
        return 1;

    if (board[0][2] == board[1][1] &&
        board[1][1] == board[2][0])
        return 1;

    return 0;
}

// Function to check if the board is full
int checkDraw()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return 0;
    return 1;
}

// Function to make a move
void makeMove(int cell)
{
    row = (cell - 1) / 3;
    col = (cell - 1) % 3;
    if (board[row][col] != 'X' && board[row][col] != 'O')
        board[row][col] = current_mark;
    else
    {
        printf("Invalid move! Try again.\n");
        int new_cell;
        scanf("%d", &new_cell);
        makeMove(new_cell);
    }
}

// Main function
int main()
{
    int cell;
    char current_player = '1';
    current_mark = 'X';

    initializeBoard();

    while (1)
    {
        displayBoard();
        printf("Player %c [%c], enter your move (1-9): ", current_player, current_mark);
        scanf("%d", &cell);

        if (cell < 1 || cell > 9)
        {
            printf("Invalid input! Enter a number from 1 to 9.\n");
            continue;
        }

        makeMove(cell);

        if (checkWin())
        {
            displayBoard();
            printf("Player %c [%c] wins!\n", current_player, current_mark);
            break;
        }

        if (checkDraw())
        {
            displayBoard();
            printf("It's a draw!\n");
            break;
        }

        // Switch player
        if (current_mark == 'X')
        {
            current_mark = 'O';
            current_player = '2';
        }
        else
        {
            current_mark = 'X';
            current_player = '1';
        }
    }

    return 0;
}
