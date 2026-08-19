#include <stdio.h>
#include <string.h>
#include <ctype.h>

int containsWord(char text[], char word[]) {
    char lowerText[2000];
    char lowerWord[100];

    int i;

    for (i = 0; text[i] != '\0'; i++)
        lowerText[i] = tolower(text[i]);

    lowerText[i] = '\0';

    for (i = 0; word[i] != '\0'; i++)
        lowerWord[i] = tolower(word[i]);

    lowerWord[i] = '\0';

    return strstr(lowerText, lowerWord) != NULL;
}

int main() {

    char news[2000];
    int score = 0;

    printf("=================================\n");
    printf("       FAKE NEWS DETECTOR\n");
    printf("=================================\n\n");

    printf("Enter news:\n");
    fgets(news, sizeof(news), stdin);

    // Suspicious words
    char *keywords[] = {
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

    int keywordCount = sizeof(keywords) / sizeof(keywords[0]);

    for (int i = 0; i < keywordCount; i++) {
        if (containsWord(news, keywords[i])) {
            score++;
        }
    }

    printf("\n---------------------------------\n");

    if (score >= 3) {
        printf("Result: FAKE NEWS ⚠️\n");
        printf("Confidence: High\n");
    }
    else if (score == 2) {
        printf("Result: SUSPICIOUS ⚠️\n");
        printf("Confidence: Medium\n");
    }
    else {
        printf("Result: LIKELY REAL ✅\n");
        printf("Confidence: Low Risk\n");
    }

    printf("---------------------------------\n");

    return 0;
}
