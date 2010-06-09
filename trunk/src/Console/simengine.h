#ifndef SIMENGINE_H
#define SIMENGINE_H
class AbstractRBEngine;
class Character;
class SimEngine
{

public:
    SimEngine();
    static  void Initilize();
    static  void Paint();
    static void Step();
private:
    static AbstractRBEngine* world;
    static Character* ch;

};

#endif // SIMENGINE_H
