//»¼°j 
#include <iostream>
using namespace std;
int N;
long long a[20], answer ;
void DFS( int now , long long product ){
    if ( product > answer )
        answer = product;
    if ( now == N )
        return;    
    DFS( now+1 , product * a[now] );

}
int main(){
    int c = 1;
    while ( cin >> N ){
        for ( int i = 0 ; i < N ; i++ )
            cin >> a[i];    
        answer = 0;
        for ( int str = 0 ; str < N ; str++ )
            DFS( str+1 , a[str] );

        cout << "Case #" << c++ << ": The maximum product is " << answer << "." << endl;
        cout << endl;
    }

    return 0;    
}
