#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game(int);
    ~Game();
    void play();
private:
    int maxNum = 0;
    int playerGuess = 0;
    int randomNumber = 0;
    int numOfGuesses = 0;
    void printGameResult();
protected:
};

#endif // GAME_H
