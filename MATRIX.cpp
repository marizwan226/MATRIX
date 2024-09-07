#include <iostream>
#include <vector>

using namespace std;

class SparseMatrix {
public:
    SparseMatrix(int rows, int cols) : rows(rows), cols(cols), data(rows * cols, 0) {}

    int get(int row, int col) const {
        return data[row * cols + col];
    }

    void set(int row, int col, int value) {
        data[row * cols + col] = value;
    }

    void print() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }

private:
    int rows, cols;
    vector<int> data;
};

int main() {
    SparseMatrix matrix(3, 4);
    matrix.set(1, 2, 5);
    matrix.set(2, 0, 7);

    matrix.print();

    return 0;
}