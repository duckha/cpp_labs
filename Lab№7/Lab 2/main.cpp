#include <iostream>
using namespace std;
int main() {
    string text;
    cout << "Введите текст";
    getline(cin, text);
    int x = 0;
    int count = 0;
    for (int x = 0; x < text.length(); x++) {
        if (text[x] !=' ' && text[x] != '.')
        {
            count += 1;
        }
        if (count == 3 && (text[x + 1] == ' '  || text[x + 1] == '.'))
        {
            if (text[x + 1] == ' ' || text[x + 1] == '.')
            {
                for (int i = x - 2; i <= x; i++) {
                    cout<<text[i];
                }
                cout<<" ";
            }
        }
        if(text[x] == ' ')
        {
            count = 0;
        }
    }
    return 0;
}
