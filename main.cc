#include <iostream>
#include <string>

using namespace std;


int counting(int n){
    if(n < 0){
        return 0;
    }

    if(n % 2 == 0){
        cout << n << " ";
        if(n > 0){
            return counting(n - 2);
        }
    } 
    
    return counting(n - 1);
}

string reversing(string &s, int start, int end){
    if (start >= end) {
        return s;
    }

    // Swap characters at indexes start and end
    swap(s[start], s[end]);

    // Recursive call with updated indexes
    return reversing(s, start + 1, end - 1);
}

int main(){
  int x;
  for(int j = 0; j < 3; ++j){
    cout << "Enter a number: ";
    cin >> x;
    cout << "The even numbers counting up to there:\n";
    counting(x);
  }

  // main for Part Two will go here

    string s;
  int start, end;
  cout << "Enter a string: ";
  getline(cin, s);
  cout << "Enter two numbers that are within the bounds of the string.\n";
  cin >> start >> end;
  cout << "This is how your string looks now:\n";
  reversing(s, start, end);
  cout << s << endl;

  return 0;
}