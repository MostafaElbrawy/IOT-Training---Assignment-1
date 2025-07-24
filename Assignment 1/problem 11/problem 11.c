#include <stdio.h>
#include <stdbool.h>

char board[3][4] = {
    {'A','B','C','E'},
    {'S','F','C','S'},
    {'A','D','E','E'}
};

bool visited[3][4];

bool dfs(int i, int j, char* word, int index) {
    if (word[index] == '\0') return true;
    if (i < 0 || i >= 3 || j < 0 || j >= 4) return false;
    if (visited[i][j]) return false;
    if (board[i][j] != word[index]) return false;

    visited[i][j] = true;

    bool found = dfs(i+1, j, word, index+1) ||
                 dfs(i-1, j, word, index+1) ||
                 dfs(i, j+1, word, index+1) ||
                 dfs(i, j-1, word, index+1);

    visited[i][j] = false;
    return found;
}

bool exist(char* word) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (dfs(i, j, word, 0)) return true;
        }
    }
    return false;
}

int main() {
    printf("ABCCED → %s\n", exist("ABCCED") ? "true" : "false");
    printf("SEE    → %s\n", exist("SEE") ? "true" : "false");
    printf("ABCB   → %s\n", exist("ABCB") ? "true" : "false");
    return 0;
}

// Given a 2D board of characters and a word, check if the word exists in the board.
// The word must be formed from adjacent cells (up, down, left, right), and each cell can be used only once.
// Return true if the word can be formed, false otherwise.
