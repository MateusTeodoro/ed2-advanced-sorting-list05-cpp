#include <iostream>
#include <vector>

using namespace std;

// Helper function to print vectors in terminal
void printVector(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << (i + 1 == v.size() ? "" : " ");
    }
    cout << "\n";
}

class Solution {
public:
    // Retorna o vetor C unificado a partir dos vetores A e B
    vector<int> mergeArrays(const vector<int>& A, const vector<int>& B)
    {

    }
};

int main()
{
    Solution sol;

    // --- Case 1 ---
    cout << "=== Caso 1 ===\n";
    vector<int> test1A = {1, 3, 5};
    vector<int> test1B = {2, 4, 6};
    vector<int> exp1 = {1, 2, 3, 4, 5, 6};

    vector<int> result1 = sol.mergeArrays(test1A, test1B);

    cout << "Input A:         "; printVector(test1A);
    cout << "Input B:         "; printVector(test1B);
    cout << "Expected Output: "; printVector(exp1);
    cout << "Actual Output:   "; printVector(result1);
    cout << (result1 == exp1 ? "[PASSED]" : "[FAILED]") << "\n\n";

    // --- Case 2 ---
    cout << "=== Caso 2 ===\n";
    vector<int> test2A = {2, 5, 7, 9};
    vector<int> test2B = {1, 3};
    vector<int> exp2 = {1, 2, 3, 5, 7, 9};

    vector<int> result2 = sol.mergeArrays(test2A, test2B);

    cout << "Input A:         "; printVector(test2A);
    cout << "Input B:         "; printVector(test2B);
    cout << "Expected Output: "; printVector(exp2);
    cout << "Actual Output:   "; printVector(result2);
    cout << (result2 == exp2 ? "[PASSED]" : "[FAILED]") << "\n\n";

    return 0;
}
