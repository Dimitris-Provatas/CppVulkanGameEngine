#include <vulkan/vulkan.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

class HelloTriangleApplication
{
public:
    void run()
	{
		// initWindow();
        initVulkan();
        mainLoop();
        cleanup();
    }

private:
    void initVulkan()
	{

    }

    void mainLoop()
	{

    }

    void cleanup()
	{

    }
};

int main()
{
    HelloTriangleApplication app;

	std::cout << "Running..." << std::endl;

    try
	{
        app.run();
    }
	catch (const std::exception& e)
	{
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}