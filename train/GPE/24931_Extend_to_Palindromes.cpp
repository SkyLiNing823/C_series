#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

char str[100000];
char strR[100000];
int pre[100000];

void prefix(char str[], int pre[])
{
    int i, j;
    for (i = 1, j = pre[0] = -1; str[i] != '\0'; i++)
    {

        while (j >= 0 && str[i] != str[j + 1])
            j = pre[j];

        if (str[i] == str[j + 1])
            j++;

        pre[i] = j;
    }
}

int main()
{
    int i, j;
    int len;
    while (gets(str))
    {
        len = strlen(str);
        for (i = 0; i < len; i++)
        {
            strR[i] = str[len - i - 1];
        }
        strR[len] = '\0';
        prefix(strR, pre);
        for (i = 0, j = -1; str[i] != '\0'; i++)
        {
            while (j >= 0 && str[i] != strR[j + 1])
                j = pre[j];

            if (str[i] == strR[j + 1])
                j++;
        }
        printf("%s%s\n", str, &strR[j + 1]);
    }
}