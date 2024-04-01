#pragma once
#include "scene.h"

class SceneManager {
public:
	void switchScenes(Scene& newScene);
	Scene currentScene;
private:
};

