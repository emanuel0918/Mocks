#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<int> matchPatternLocations (string & text, string & pattern);
vector<int> prefixArray (string & pattern);
int main() {
    int n;
    cin >> n;
    vector <int> locations (n);
    vector <string> pattern (n);
    vector <string> text (n);
    for (int i = 0; i < n; i++) {
        cin >> text[i];
        cin >> pattern[i];
    }
    for (int i = 0; i < n; i++) {
        locations =matchPatternLocations(text[i], pattern[i]);
        int length = locations.size();
        if (length > 0) {
            cout << length << "\n";
            for (int j = 0; j < length; j++) {
                cout << locations[j] << " ";
            }
            locations.erase(locations.begin(), locations.end());
        } else {
            cout << "Not Found";
        }
        cout << "\n\n";
    }
    return 0;

}

vector<int> matchPatternLocations (string & text, string & pattern) {
    vector<int> locations;
    int textLength = text.size(), patternLength = pattern.size();
    if (patternLength > textLength) return locations;
    //if (patternLength == 1) return countChars (text, pattern);
    vector<int> prefixTable = prefixArray (pattern);
    char c1, c2;
    for (int i = 0, j = 0; i < textLength;) {
        c1 = text[i];
        c2 = pattern[j];
        if (c1 == c2) {
            if (j == patternLength - 1) {
                locations.push_back(i - patternLength + 2);
                j = prefixTable[j];
                i++;
                continue;
            }
            i++;
            j++;
            
        } else {
            if (j > 0) {
                j = prefixTable[j - 1];
            } else {
                i++;
            }
        }
    }
    return locations;
}
vector<int> prefixArray (string & pattern) {
    int length = pattern.size();
    vector <int> prefixArray (length, 0);
    int i, j;
    char c1, c2;
    for (i = 1, j = 0; i < length; i++) {
        c1 = pattern[i];
        c2 = pattern[j];
        if (c1 == c2) {
            prefixArray[i] = ++j;
        } else {
            if (j - 1 > 0) {
                while (true) {
                    if (j - 1 < 0) {
                        j = 0;
                        break;
                    }
                    j = prefixArray[j - 1];
                    c2 = pattern[j];
                    if (c1 == c2) {
                        prefixArray[i] = ++j;
                        break;
                    }
                }
            } else {
                j = 0;
            }
        }
    }
    return prefixArray;
}