#include "scene.h"
#include "scenerunner.h"
#include "scenebasic.h"

#include <memory>

int main(int argc, char *argv[])
{
	SceneRunner runner("Chapter 1 - Basic scene.", 500, 500);

	std::unique_ptr<Scene> scene = std::unique_ptr<Scene>(new SceneBasic());

	return runner.run(std::move(scene));
}


