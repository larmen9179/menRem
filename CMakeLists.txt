cmake_minimum_required(VERSION 3.22)
project(menRem LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 26)

find_package(SDL3 REQUIRED)      # SDL3::SDL3
find_package(SDL3_image CONFIG REQUIRED)    # SDL3_image::SDL3_image
# find_package(nlohmann_json CONFIG REQUIRED) # nlohmann_json::nlohmann_json

add_executable(game
  src/main.cpp
)

# target_link_libraries(game
#   PRIVATE SDL3::SDL3 SDL3_image::SDL3_image nlohmann_json::nlohmann_json
# )

target_link_libraries(game
  PRIVATE SDL3::SDL3 SDL3_image::SDL3_image
)