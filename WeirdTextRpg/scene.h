#pragma once
#include "player.h"
#include <vector>
class Scene {
 public:
	      Scene(Creature creatures[]);
	 void addCreatureToScene(Creature creature);
 protected:
	 Creature sceneCreatures;
};

