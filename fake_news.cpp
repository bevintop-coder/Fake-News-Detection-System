#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool containsWord(string text, string word) {

    transform(text.begin(), text.end(),
              text.begin(), ::tolower);

    transform(word.begin(), word.end(),
              word.begin(), ::tolower);

    return text.find(word) != string::npos;
}

int main() {

    string news;
    int score = 0;

    cout << "=================================\n";
    cout << "       FAKE NEWS DETECTOR\n";
    cout << "=================================\n\n";

    cout << "Enter news:\n";
    getline(cin, news);

    vector<string> keywords = {
        "shocking",
        "breaking",
        "miracle",
        "secret",
        "100% true",
        "you won't believe",
        "urgent",
        "viral",
        "fake",
        "click here"
    };

    for (string keyword : keywords) {

        if (containsWord(news, keyword)) {
            score++;
        }
    }

    cout << "\n---------------------------------\n";

    if (score >= 3) {
        cout << "Result: FAKE NEWS ⚠️\n";
        cout << "Confidence: High\n";
    }
    else if (score == 2) {
        cout << "Result: SUSPICIOUS ⚠️\n";
        cout << "Confidence: Medium\n";
    }
    else {
        cout << "Result: LIKELY REAL ✅\n";
        cout << "Confidence: Low Risk\n";
    }

    cout << "---------------------------------\n";

    return 0;
}
