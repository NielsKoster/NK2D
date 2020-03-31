// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <GLFW/glfw3.h>

#include <common/renderer.h>
#include <common/camera.h>
#include <common/sprite.h>
#include <common/scene.h>
#include <common/scenemanager.h>
#include <common/entity.h>

int main( void )
{
	Renderer renderer(1280, 720);

	SceneManager scenemanager;
	Scene* defaultscene = new Scene();
	scenemanager.loadedscene = defaultscene;

	do {
		// Update deltaTime
		float deltaTime = renderer.updateDeltaTime();

		// Compute the ViewMatrix from keyboard and mouse input (see: camera.h/cpp)
		computeMatricesFromInputs(renderer.window(), deltaTime);

		// Clear the screen
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		// glm::vec3 cursor = getCursor(); // from Camera
		// printf("(%f,%f)\n",cursor.x, cursor.y);

		// Render all Sprites (Sprite*, xpos, ypos, xscale, yscale, rotation)
		static float rot_z = 0.0f;

		// Swap buffers
		glfwSwapBuffers(renderer.window());
		glfwPollEvents();

	} // Check if the ESC key was pressed or the window was closed
	while( glfwGetKey(renderer.window(), GLFW_KEY_ESCAPE ) != GLFW_PRESS &&
		   glfwWindowShouldClose(renderer.window()) == 0 );

	// Close OpenGL window and terminate GLFW
	glfwTerminate();

	return 0;
}
