#include <iostream>
#include <string>

struct GameState{
    // try to write from higheer data types to lower data types
    float score;
    short numberOfPlayers;
    bool checkpoint;
    
};

int main() {

    GameState gs;
    //rearranging the bytes allocation from highest to lowest will prevent from padding , so putting float first, then short and then bool (4 bytes -> 2 bytes -> 1 bytes)
     
    std::cout << sizeof(gs.score) << std::endl;     // 4 bytes for float
    std::cout << sizeof(gs.numberOfPlayers) << std::endl; //2 bytes for short and the other 2 bytes are for padding
    std::cout << sizeof(gs.checkpoint) << std::endl; // 1 bytes for bool the other 3 bytes are for padding
    std::cout << sizeof(gs) << std::endl;   // making it total to 12 bytes, but now we have added from highest to lowes data type we will get 8 bytes only in total

    // for(int i=0; i<1000; i++){
    //     GameState* gs = new GameState;
    // }

    std::cout << alignof(gs) << std::endl; 

    return 0;
}