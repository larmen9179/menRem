#include <iostream>

class GameState {
    private:        
        enum State{
            // TITLE,
            PLAYING,
        };

        State currentState{PLAYING}; 

    public:
        GameState(){} // Default 

        void setState(State newState);

        State getState() const;
};