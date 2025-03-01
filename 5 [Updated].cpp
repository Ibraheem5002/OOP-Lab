#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class ValidateString
{
private:
    static char Character[52];
    char Word[100];
public:
    ValidateString(char W[100])
    {
        strcpy(Word,W);
    }

    void Validate()
    {
        int len = strlen(Word);
        int OK[len] = {0};
        int Okay = 1;

        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < 52; j++)
            {
                if (Word[i] == Character[j])
                {
                    OK[i] = 1;
                    break;
                }
                else
                {
                    OK[i] = 0;
                }
            }
        }

        for (int i = 0; i < len; i++)
        {
            if (OK[i] == 0)
            {
                Okay = 0;
                break;
            }
            
        }
        
        
        if (Okay == 1)
        {
            cout << "String contained only letters." << endl;
        }
        else
        {
            cout << "String contains unwanted characters." << endl;
        }
    }
};
char ValidateString :: Character[52] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z'};

int main()
{
    ValidateString V("IBRAh!M");

    V.Validate();
}