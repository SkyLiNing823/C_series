#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    int i,j;
    int x;
    while(cin>>n)
    {
        if(n==2)
        {
            for (i = 0; i < 100;i++)
            {
                x = (i / 10 + i % 10);
                if(x*x == i)
                    cout << i / 10 << i % 10 << endl;
            }
        }
        else if(n==4)
        {
            for (i = 0; i < 100; i++)
            {
                for (j = 0; j < 100; j++)
                {
                    x = i + j;
                    if(x*x==(i*100+j))
                    {
                        if(i<10 && j<10)
                        {
                            cout << "0" << i << "0" << j << endl;
                        }
                        else if(i<10)
                            cout << "0" << i << j << endl;
                        else if(j<10)
                            cout << i << "0" << j << endl;
                        else
                            cout << i << j << endl;
                    }

                }
            }
        }
        else if(n==6)
        {
             for (i = 0; i < 1000; i++)
            {
                for (j = 0; j < 1000; j++)
                {
                    x = i + j;
                    if(x*x==(i*1000+j))
                    {
                        if(i<10)
                            cout << "00" << i;
                        else if(i<100)
                            cout << "0" << i;
                        else
                            cout << i;
                        if(j<10)
                            cout << "00" << j;
                        else if(j<100)
                            cout << "0" << j;
                        else
                            cout << j;
                        cout << endl;
                    }

                }
            }
        }
        else if(n==8)
        {
             for (i = 0; i < 10000; i++)
            {
                for (j = 0; j < 10000; j++)
                {
                    x = i + j;
                    if(x*x==(i*10000+j))
                    {
                        if(i<10)
                            cout << "000" << i;
                        else if(i<100)
                            cout << "00" << i;
                        else if(i<1000)
                            cout << "0" << i;
                        else
                            cout << i;
                        if(j<10)
                            cout << "000" << j;
                        else if(j<100)
                            cout << "00" << j;
                        else if(j<1000)
                            cout << "0" << j;
                        else
                            cout << j;
                        cout << endl;
                    }

                }
            }
        }
    }
}