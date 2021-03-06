#include <iostream>
#include <cstdlib>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>

void setup_logging();

int main()
{

    setup_logging();

    try
    {
        spdlog::info("Hello world!");
    } catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}

void setup_logging()
{
    spdlog::set_level(spdlog::level::debug);
    spdlog::stdout_color_mt("vulkan");
}
