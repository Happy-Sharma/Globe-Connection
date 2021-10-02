#include <iostream>
using namespace std;
 
int main ()
{
    cout<<"Enter Number of Globes";
    int n;
    cin>>n;
    while(n--){
    cout<<"Enter Globe description";
    string input;
    cin>>input;
    
    cout<<input<< " is the description you entered\n";
    }
    return 0;
}
