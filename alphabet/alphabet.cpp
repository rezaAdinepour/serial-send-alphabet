#include <iostream>


using namespace std;
int countChar(char* s, char c);



int main()
{
    char str[100];
    cout << "Enter string: ";
    fgets(str, sizeof(str), stdin);

    //char str[100] = "hello world";

    char alphabet[28] = "abcdefghijklmnopqrstuvwxyz ";

    cout << "strlen(str) = " << strlen(str) - 1 << endl;
    for (size_t i = 0; i < strlen(alphabet); i++)
    {
        cout << "count " << alphabet[i] << ": " << countChar(str, alphabet[i]) << endl;
    }
}




int countChar(char* s, char c)
{
    int count = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
            count++;
    }

    return count;
}