#include <iostream>
#include "Header.h"

#define lenn 500

using namespace std;



//******************************************************* solution 1 *******************************************************
void alphaCount(char *str)
{
    int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0, H = 0, I = 0, J = 0, K = 0, L = 0, M = 0, N = 0, O = 0, P = 0, Q = 0, R = 0, S = 0, T = 0
        , U = 0, V = 0, W = 0, X = 0, Y = 0, Z = 0;
    for (size_t i = 0; i < strlen(str); i++)
    {
        switch (str[i])
        {
        case 'A':
            A++;
            break;
        case 'B':
            B++;
            break;
        case 'C':
            C++;
            break;
        case 'D':
            D++;
            break;
        case 'E':
            E++;
            break;
        case 'F':
            F++;
            break;
        case 'G':
            G++;
            break;
        case 'H':
            H++;
            break;
        case 'I':
            I++;
            break;
        case 'J':
            J++;
            break;
        case 'K':
            K++;
            break;
        case 'L':
            L++;
            break;
        case 'M':
            M++;
            break;
        case 'N':
            N++;
            break;
        case 'O':
            O++;
            break;
        case 'P':
            P++;
            break;
        case 'Q':
            Q++;
            break;
        case 'R':
            R++;
            break;
        case 'S':
            S++;
            break;
        case 'T':
            T++;
            break;
        case 'U':
            U++;
            break;
        case 'V':
            V++;
            break;
        case 'W':
            W++;
            break;
        case 'X':
            X++;
            break;
        case 'Y':
            Y++;
            break;
        case 'Z':
            Z++;
        default:
            break;
        }

    }
    cout << "A: " << A << endl << "B: " << B << endl << "C: " << C << endl << "D: " << D << endl << "E: " << E << endl << "F: " << F << endl << "G: " << G << endl
        << "H: " << H << endl << "I: " << I << endl << "J: " << J << endl << "K: " << K << endl << "L: " << L << endl << "M: " << M << endl << "N: " << N << endl
        << "O: " << O << endl << "P: " << P << endl << "Q: " << Q << endl << "R: " << R << endl << "S: " << S << endl << "T: " << T << endl << "U: " << U << endl
        << "V: " << V << endl << "W: " << W << endl << "X: " << X << endl << "Y: " << Y << endl << "Z: " << Z << endl;
}





//******************************************************* solution 2 *******************************************************
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



//******************************************************* solution 3 *******************************************************
int count(string s, char c)
{
    int res = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == c)
            res++;
    return res;
}

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