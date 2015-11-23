#ifndef GAME_H
#define	GAME_H

#include <string>

#include "glm/glm.hpp"
#include "system/Application.hpp"

#include "Camera.h"
#include "HeightMap.h"
#include "Terrain.h"

class Game : public Application {
public:
    Game();
    Game(const Game& orig);
    virtual ~Game();

protected:
    virtual void loop();

private:
    Camera *camera;
    HeightMap *heightMap;
    Terrain *terrain;
};

#endif	/* GAME_H */
