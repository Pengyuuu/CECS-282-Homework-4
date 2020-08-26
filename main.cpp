#include <iostream>
#include "BoardPosition.hpp"
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
    // Construct BoardPositions
    BoardPosition testOne = BoardPosition();
            
    BoardPosition testTwo = BoardPosition(5, 7);
    BoardPosition testThree = BoardPosition(5, 7);
    BoardPosition p;
    BoardPosition testFour = BoardPosition(13, 4);
    BoardPosition testFive = BoardPosition(5, 8);
    BoardPosition testSix = BoardPosition(-5, 13);
    BoardPosition testSeven = BoardPosition(5, 4);
    
    BoardDirection hello;
    BoardDirection whyyy = BoardDirection(1, 4);
    BoardDirection ahh = BoardDirection::CARDINAL_DIRECTIONS[0];
    
    // Construct a vector
    vector<BoardPosition> test;
    
    // Test overloaded string operator
    cout << string(testOne) << endl;
    cout << string(testTwo) << endl;
            
    // Test overloaded operator ==
    cout << (testOne == testTwo) << endl;
    cout << (testTwo == testThree) << endl;
        
    // Test overloaded operator >>
    cin >> p;
    
    // Test overloaded operator <<
    cout << testOne << endl;
    cout << testTwo << endl;
    cout << p << endl;
    
    // Test overloaded operator <
    cout << (testTwo < testFour) << endl;
    cout << (testTwo < testFive) << endl;
    cout << (testTwo < testSeven) << endl;
    
    // Test InBounds method
    cout << testTwo.InBounds(8) << endl;
    cout << testFour.InBounds(8) << endl;
    cout << testSeven.InBounds(8) << endl;
    
    // Test other InBounds method
    cout << testTwo.InBounds(10, 9) << endl;
    cout << testFive.InBounds(3, 5) << endl;
    cout << testSix.InBounds(1, 14) << endl;
    
    // Test vector method
    test = testTwo.GetRectangularPositions(5, 8);
    for (vector<BoardPosition>::iterator itr = test.begin(); itr != test.end(); itr++){
        
        BoardPosition print = *itr;
        
        cout << string(print) << endl;
    
    }
    
    // Test operator+
    
    testOne + hello;
    testTwo + ahh;
    testThree + whyyy;
    
    // Test BoardDirections
    cout << testOne << endl;
    cout << testTwo << endl;
    cout << testThree << endl;
    
    return 0;
}
