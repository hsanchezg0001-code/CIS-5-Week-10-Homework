// Practice 10: Gradebook tools (pointers and references)
// CIS 5 - Week 10
// Author: Herberth Sanchez-Gomez

#include <iostream>

using namespace std;

// Function prototypes
void curve(int scores[], int n, int points);
void minMax(const int scores[], int n, int& lo, int& hi);
bool findScore(const int scores[], int n, int target, int* where);

// Helper function to print an array
void printScores(const int scores[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << scores[i] << (i + 1 < n ? " " : "");
    }
    cout << "\n";
}

int main() {
    const int SIZE = 5;
    int scores[SIZE] = {72, 88, 95, 60, 81};

    // 1. Display initial scores
    cout << "Before: ";
    printScores(scores, SIZE);

    // 2. Find min and max using references
    int low = 0;
    int high = 0;
    minMax(scores, SIZE, low, high);
    cout << "Low: " << low << "  High: " << high << "\n";

    // 3. Curve the scores (modifies original array)
    curve(scores, SIZE, 5);
    cout << "After curve +5: ";
    printScores(scores, SIZE);

    // 4. Search tests using pointer
    int foundIndex = -1;
    if (findScore(scores, SIZE, 100, &foundIndex)) {
        cout << "100 found at index " << foundIndex << "\n";
    } else {
        cout << "100 not found\n";
    }

    if (findScore(scores, SIZE, 50, &foundIndex)) {
        cout << "50 found at index " << foundIndex << "\n";
    } else {
        cout << "50 not found\n";
    }

    return 0;
}

// -------------------------------------------------------------
// Function Implementations
// -------------------------------------------------------------

// Adds points to every score; modifies the caller's array directly
void curve(int scores[], int n, int points) {
    for (int i = 0; i < n; ++i) {
        scores[i] += points;
    }
}

// Determines lowest and highest scores, passing results back through references
void minMax(const int scores[], int n, int& lo, int& hi) {
    if (n <= 0) return;
    lo = scores[0];
    hi = scores[0];
    for (int i = 1; i < n; ++i) {
        if (scores[i] < lo) {
            lo = scores[i];
        }
        if (scores[i] > hi) {
            hi = scores[i];
        }
    }
}

// Searches for target; writes index through where only if where != nullptr
bool findScore(const int scores[], int n, int target, int* where) {
    for (int i = 0; i < n; ++i) {
        if (scores[i] == target) {
            if (where != nullptr) {
                *where = i;
            }
            return true;
        }
    }
    return false;
}