#ifndef SIMENGINE_H
#define SIMENGINE_H

class SimEngine
{
public:
    SimEngine();
    static  void Initilize();
    static  void Paint();
private:
    static AbstractRBEngine* world;

};

#endif // SIMENGINE_H
